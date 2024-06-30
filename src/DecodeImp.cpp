#include "DecodeImp.h"
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <libavutil/avutil.h>
}
#include <winsock2.h>
#include <cstdint>
#include <iostream>

#pragma comment(lib, "ws2_32.lib")

static int socket_read(void *opaque, uint8_t *buf, int buf_size)
{
    std::cout<<"socket read call"<<std::endl;

    char *bufpoint = reinterpret_cast<char*>(buf);
    int ret = recv(*(SOCKET*)opaque, bufpoint, buf_size, 0);

    std::cout<<"recv ret:"<<ret<<std::endl;

    return ret;
}

DecodeImp::DecodeImp()
{
    av_register_all();
}

DecodeImp::~DecodeImp()
{
    avformat_close_input(&formatContext);
    av_free(buffer);
    avio_context_free(&avioContext);
}

int DecodeImp::Init(int sockfd)
{
    buffer = (uint8_t *)av_malloc(1024);
    if(!buffer)
    {
        std::cout<<"av malloc error"<<std::endl;
        return -1;
    }

    avioContext = avio_alloc_context(
        buffer, 1024,
        0,
        &sockfd,
        socket_read,
        NULL,
        NULL
    );

    formatContext = avformat_alloc_context();
    formatContext->pb = avioContext;

    std::cout<<"DecodeImp::Init socket:"<< sockfd<< std::endl;
    *(SOCKET*)avioContext->opaque = sockfd;

    if (avformat_open_input(&formatContext, NULL, NULL, NULL) < 0) 
    {
        std::cout<<"open avformat error"<<std::endl;
        return -1;
    }

    // 获取流信息
    if (avformat_find_stream_info(formatContext, NULL) < 0) 
    {
        fprintf(stderr, "Could not find stream information.\n");
        return -1;
    }

    video_stream = NULL;
    for (int i = 0; i < formatContext->nb_streams; i++) 
    {
        if (formatContext->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) 
        {
            video_stream = formatContext->streams[i];
            break;
        }
    }

    if (!video_stream)
    {
        fprintf(stderr, "No video stream found\n");
        return -1;
    }

    std::cout<<"codec_id:"<<video_stream->codecpar->codec_id<<std::endl;

    codec = avcodec_find_decoder(video_stream->codecpar->codec_id);
    if (!codec) 
    {
        fprintf(stderr, "Failed to find codec\n");
        return -1;
    }

    codec_ctx = avcodec_alloc_context3(codec);
    if (avcodec_parameters_to_context(codec_ctx, video_stream->codecpar) < 0) 
    {
        fprintf(stderr, "Failed to copy codec parameters\n");
        return -1;
    }

    if (avcodec_open2(codec_ctx, codec, NULL) < 0) 
    {
        fprintf(stderr, "Failed to open codec\n");
        return -1;
    }

    pkt = av_packet_alloc();
    if(!pkt)
    {
        std::cout<<"alloc pkt error"<<std::endl;
        return -1;
    }

    frame = av_frame_alloc();
    if(!frame)
    {
        std::cout<<"alloc frame error"<<std::endl;
        return -1;
    }

    return 0;
}

void DecodeImp::HandlerFrameToDecode()
{
    int ret = 0;

    while ((ret = av_read_frame(formatContext, pkt)) >= 0) 
    {
        if (pkt->stream_index == video_stream->index)
        {
            // 处理 packet
            // 例如，使用 avcodec_send_packet 将 packet 发送到解码器
            std::cout << "packet:" << pkt->size << std::endl;
            // 释放 packet 中的数据，避免内存泄漏
        }
        av_packet_unref(pkt);
    }

    if (ret < 0 && ret != AVERROR_EOF) 
    {
        std::cout<<"read eol"<<std::endl;
    }
}
