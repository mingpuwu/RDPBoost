#include "EncodeImp.h"
extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <libavutil/frame.h>
#include <libavutil/avutil.h>
}

#include <iostream>
#include <fstream>

#define TESTH264FILE "TestH264Record.video"

EnCodeImp::EnCodeImp():RecordH264FileName(TESTH264FILE)
{
    this->width = 1920;
    this->height = 1080;
    this->frame_rate = 30;
}

EnCodeImp::~EnCodeImp()
{
    // Clean up
    av_frame_free(&rgba_frame);
    sws_freeContext(sws_context);
    avcodec_free_context(&codec_context);

    // av_free(rgba_data);
}

int EnCodeImp::Init()
{
    int ret = 0;

    // av_register_all();

    // Find the H.264 encoder
    Encodec = avcodec_find_encoder(AV_CODEC_ID_H264);
    if (!Encodec)
    {
        fprintf(stderr, "Codec not found\n");
        exit(1);
    }

    codec_context = avcodec_alloc_context3(Encodec);
    if (!codec_context)
    {
        fprintf(stderr, "Could not allocate video codec context\n");
        exit(1);
    }

    // Set codec parameters
    codec_context->bit_rate = 4000000;
    codec_context->width = 1920;
    codec_context->height = 1080;
    codec_context->time_base = (AVRational){1, 30};
    codec_context->framerate = (AVRational){30, 1};
    codec_context->gop_size = 30;
    codec_context->max_b_frames = 1;
    codec_context->pix_fmt = AV_PIX_FMT_YUV420P;

    if (avcodec_open2(codec_context, Encodec, NULL) < 0)
    {
        fprintf(stderr, "Could not open codec\n");
        return -1;
    }

    RecordH264File = std::fopen(RecordH264FileName.c_str(), "wb");
    if (!RecordH264File)
    {
        fprintf(stderr, "Could not open %s\n", RecordH264FileName.c_str());
        return -1;
    }

    frame = av_frame_alloc();
    if (!frame)
    {
        fprintf(stderr, "Could not allocate video frame\n");
        return -1;
    }

    frame->format = codec_context->pix_fmt;
    frame->width = codec_context->width;
    frame->height = codec_context->height;

    ret = av_frame_get_buffer(frame, 0);
    if (ret < 0)
    {
        fprintf(stderr, "Could not allocate the video frame data\n");
        return -1;
    }

    pkt = av_packet_alloc();
    if (!pkt)
        return -1;

    // Create a software scaling context
    sws_context = sws_getContext(codec_context->width, codec_context->height, AV_PIX_FMT_RGBA,
                                 codec_context->width, codec_context->height, AV_PIX_FMT_YUV420P,
                                 0, 0, 0, 0);

    return 0;
}

int EnCodeImp::HandlerFrameToEncode(uint8_t *data, int size)
{
    // Convert RGBA to YUV420P
    const uint8_t *src_slices[1] = {data};
    int src_stride[1] = {4 * codec_context->width};
    sws_scale(sws_context, src_slices, src_stride, 0, codec_context->height, frame->data, frame->linesize);

    // int64_t timestamp = av_frame_get_best_effort_timestamp(frame);

    count++;
    frame->pts = count;

    DoEncode(frame);

    return 0;
}

void EnCodeImp::DoEncode(AVFrame* frameI)
{
    int ret = 0;

    ret = avcodec_send_frame(codec_context, frameI);
    if (ret < 0)
    {
        fprintf(stderr, "Error sending a frame for encoding\n");
        return;
    }

    while (ret >= 0)
    {
        ret = avcodec_receive_packet(codec_context, pkt);
        if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
            return;
        else if (ret < 0)
        {
            fprintf(stderr, "Error during encoding\n");
            return;
        }

        if(RecordH264File)
            std::fwrite(pkt->data, pkt->size, 1, RecordH264File);

        //todo
        

        av_packet_unref(pkt);
    }
}
