#ifndef DECODEIMP_H
#define DECODEIMP_H
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
#include <libavcodec/packet.h>
}
#include <cstdint>
#include <cstdlib>
#include <string>

class DecodeImp
{
public:
    DecodeImp();

    ~DecodeImp();

    int Init();

    void DecodeHandlerFrame(uint8_t *data, int data_size);
private:
    int DoDecode();

private:
    AVCodecContext *Decodec_ctx = NULL;
    AVCodec *codec = NULL;
    AVCodecParserContext *parser = NULL;
    struct SwsContext *sws_ctx = NULL;

    AVFrame *frame = NULL;
    AVFrame *rgbframe = NULL;
    AVPacket *pkt = NULL;

    std::string RecordFileName;
    FILE* RecordFile;
};

#endif