#ifndef CODECIMP_H
#define CODECIMP_H

#include <cstdint>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

class codecImp
{
public:
    codecImp();

    ~codecImp();

    bool Init(char* output_file);

    void StartCodecThread(char* input_file);

    void SendFrameToCodec(uint8_t* frame, int width = 1920, int height = 1080);

    uint8_t* PubEncodeFrame();

    void StopCodec();

private:
    AVFormatContext* format_context;
    AVCodec* codec;
    AVStream* video_stream;
    AVCodecContext* codec_context;
    AVFrame* frame;
    AVFrame* rgba_frame;
    SwsContext* sws_context;
    AVPacket* pkt;
    int width;
    int height;
    int frame_rate;
};

#endif // CODECIMP_H
