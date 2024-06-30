#ifndef DECODEIMP_HPP
#define DECODEIMP_HPP
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <libavutil/avutil.h>
}
#include <cstdint>

class DecodeImp
{
public:
    DecodeImp();
    ~DecodeImp();

    int Init(int sockfd);

    void HandlerFrameToDecode();
private:
    int test;
    uint8_t *buffer;
    AVFormatContext *formatContext;
    AVCodecContext *codec_ctx;
    AVCodec *codec;
    AVPacket *pkt;
    AVFrame *frame;
    AVIOContext *avioContext;
    AVStream *video_stream;
};


#endif
