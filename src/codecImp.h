#ifndef CODECIMP_H
#define CODECIMP_H

#include <cstdint>
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

enum class CodecType
{
    CODECTYPE_ENCODE,
    CODECTYPE_DECODE,
};

//Decode
class CodecImp
{
public:
    CodecImp();

    ~CodecImp();

    bool Init(CodecType type);

    //Encode or Decode
    void StartCodecThread(char* input_file = nullptr);

    void SendFrameToCodec(uint8_t* frame, int width = 1920, int height = 1080);

    uint8_t* PubEncodeFrame();

    void StopCodec();

private:
    CodecType type;
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
