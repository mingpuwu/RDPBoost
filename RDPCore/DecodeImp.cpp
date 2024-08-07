#include "DecodeImp.h"
#include "Logger.h"

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <libavcodec/packet.h>
}
#include <iostream>

#define TESTRECORDFILE "TestRecordRgba.raw"

DecodeImp::DecodeImp():RecordFileName(TESTRECORDFILE)
{
    
}

DecodeImp::~DecodeImp()
{
    av_frame_unref(frame);
    av_frame_free(&frame);

    av_frame_unref(rgbframe);
    av_frame_free(&rgbframe);

    // av_free_packet(pkt);
    av_free(pkt);

    // av_free(buffer);
    sws_freeContext(sws_ctx);

    avcodec_close(Decodec_ctx);

    avcodec_free_context(&Decodec_ctx);

    std::fclose(RecordFile);
}

int DecodeImp::Init()
{
    sws_ctx = sws_getContext(1920, 1080, AV_PIX_FMT_YUV420P,
                             1920, 1080, AV_PIX_FMT_RGBA,
                             0, nullptr, nullptr, nullptr);
    if(!sws_ctx)
    {
        LOGGER_ERROR("sws_getContext");
        return -1;
    }

    codec = avcodec_find_decoder(AV_CODEC_ID_H264);
    if (!codec)
    {
        LOGGER_ERROR("Failed to find codec");
        return -1;
    }

    parser = av_parser_init(codec->id);
    if(!parser)
    {
        LOGGER_ERROR("parser init error");
        return -1;
    }

    Decodec_ctx = avcodec_alloc_context3(codec);

    if (avcodec_open2(Decodec_ctx, codec, NULL) < 0)
    {
        LOGGER_ERROR("Failed to open codec");
        return -1;
    }

    pkt = av_packet_alloc();
    if(!pkt)
    {
        LOGGER_ERROR("alloc pkt error");
        return -1;
    }

    frame = av_frame_alloc();
    if(!frame)
    {
        LOGGER_ERROR("alloc frame error");
        return -1;
    }

    rgbframe = av_frame_alloc();
    if(!rgbframe)
    {
        LOGGER_ERROR("alloc rgbframe error");
        return -1;
    }

    rgbframe->width =  1920;
    rgbframe->height = 1080;
    rgbframe->format = AV_PIX_FMT_RGBA;

    int ret = av_frame_get_buffer(rgbframe, 32);
    if(ret < 0)
    {
        LOGGER_ERROR("av_frame_get_buffer error");
        return -1;
    }

    RecordFile = std::fopen(RecordFileName.c_str(),"wb+");
    if(!RecordFile)
    {
        LOGGER_ERROR("open output file error");
        return -1;
    }

    return 0;
}

void DecodeImp::DecodeHandlerFrame(uint8_t *data, int data_size, PlayCallBack cb)
{
    int ret = 0;
    uint8_t *dataPoint = data;

    while (data_size > 0)
    {
        ret = av_parser_parse2(parser, Decodec_ctx, &pkt->data, &pkt->size,
                               dataPoint, data_size, AV_NOPTS_VALUE, AV_NOPTS_VALUE, 0);

        // std::cout << "pkt->size:" << pkt->size << " ret:" << ret << std::endl;

        dataPoint += ret;
        data_size -= ret;

        if (pkt->size)
            DoDecode(cb);
    }
}

int DecodeImp::DoDecode(PlayCallBack cb)
{
    // std::cout<<"DoDecode"<<std::endl;
    int ret = avcodec_send_packet(Decodec_ctx, pkt);
    if(ret < 0)
    {
        LOGGER_ERROR("send packet error");
        return -1;
    }

    while (ret >= 0)
    {
        ret = avcodec_receive_frame(Decodec_ctx, frame);
        if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
        {
            // std::cout<<"recv frame error"<<std::endl;
            return -1;
        }
        else if (ret < 0)
        {
            LOGGER_ERROR("decode error");
            return -1;
        }
        else
        {
            int ret = sws_scale(sws_ctx, frame->data, frame->linesize, 0,
                                frame->height, rgbframe->data, rgbframe->linesize);

            if(ret < 0)
            {
                LOGGER_ERROR("sws_scale error");
            }
            else
            {
                //std::cout<<"Decode success"<<std::endl;
                if(RecordFile)
                {
                    std::fwrite(rgbframe->data[0], rgbframe->linesize[0]*1080, 1, RecordFile);
                }
                
                //todo
                if(cb)
                {
                    // std::cout<<"call cb"<<std::endl;
                    cb(rgbframe->data[0], rgbframe->linesize[0]*1080, 0);
                }
            }

        }
    }

    return 0;
}

void DecodeImp::CloseRecored()
{
    if(RecordFile)
    {
        std::fflush(RecordFile);
        std::fclose(RecordFile);
    }
    RecordFile = nullptr;
}
