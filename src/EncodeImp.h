#ifndef ENCODECIMP_H
#define ENCODECIMP_H

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <string>

class EnCodeImp
{
public:
    EnCodeImp();

    ~EnCodeImp();

    int Init();

    int HandlerFrameToEncode(uint8_t *data, int size);

private:
    void DoEncode();

private:
    const AVCodec* Encodec = nullptr;
    AVCodecContext* codec_context = nullptr;
    AVFrame* frame = nullptr;
    AVFrame* rgba_frame = nullptr;
    SwsContext* sws_context = nullptr;
    AVPacket* pkt = nullptr;
    std::string RecordH264FileName;
    FILE* RecordH264File;
    int width;
    int height;
    int frame_rate;
    uint64_t count;
};

#endif // CODECIMP_H
