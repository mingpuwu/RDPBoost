#include "codecImp.h"
#include <iostream>
#include <fstream>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}


#ifdef av_err2str
#undef av_err2str
#include <string>
av_always_inline std::string av_err2string(int errnum)
{
    char str[AV_ERROR_MAX_STRING_SIZE];
    return av_make_error_string(str, AV_ERROR_MAX_STRING_SIZE, errnum);
}
#define av_err2str(err) av_err2string(err).c_str()
#endif // av_err2str

codecImp::codecImp()
{
    this->width = 1920;
    this->height = 1080;
    this->frame_rate = 30;
}

codecImp::~codecImp()
{
    // Clean up
    av_frame_free(&frame);
    av_frame_free(&rgba_frame);
    sws_freeContext(sws_context);
    avcodec_free_context(&codec_context);
    avio_closep(&format_context->pb);
    avformat_free_context(format_context);
}

bool codecImp::Init(char* output_file)
{
    av_register_all();

    avformat_alloc_output_context2(&format_context, nullptr, nullptr, output_file);
    if (!format_context) {
        std::cerr << "Could not create output context" << std::endl;
        return false;
    }

    codec = avcodec_find_encoder(AV_CODEC_ID_H264);
    if (!codec) {
        std::cerr << "Codec not found" << std::endl;
        return false;
    }

    video_stream = avformat_new_stream(format_context, codec);
    if (!video_stream) {
        std::cerr << "Could not create video stream" << std::endl;
        return false;
    }

    codec_context = avcodec_alloc_context3(codec);
    if (!codec_context) {
        std::cerr << "Could not allocate video codec context" << std::endl;
        return false;
    }

    // Set codec context parameters
    codec_context->codec_id = codec->id;
    codec_context->bit_rate = 400000;
    codec_context->width = width;
    codec_context->height = height;
    codec_context->time_base = (AVRational){1, frame_rate};
    codec_context->framerate = (AVRational){frame_rate, 1};
    codec_context->gop_size = 10;
    codec_context->max_b_frames = 1;
    codec_context->pix_fmt = AV_PIX_FMT_YUV420P;

    // Open codec
    if (avcodec_open2(codec_context, codec, nullptr) < 0) {
        std::cerr << "Could not open codec" << std::endl;
        return false;
    }

    // Copy codec context to stream codec parameters
    if (avcodec_parameters_from_context(video_stream->codecpar, codec_context) < 0)
    {
        std::cerr << "Could not copy codec context to stream parameters" << std::endl;
        return false;
    }

    // Open output file
    if (!(format_context->oformat->flags & AVFMT_NOFILE))
    {
        if (avio_open(&format_context->pb, output_file, AVIO_FLAG_WRITE) < 0)
        {
            std::cerr << "Could not open output file" << std::endl;
            return false;
        }
    }

    // Write file header
    if (avformat_write_header(format_context, nullptr) < 0) {
        std::cerr << "Error occurred when writing header" << std::endl;
        return false;
    }

    // Allocate frame
    AVFrame* frame = av_frame_alloc();
    if (!frame)
    {
        std::cerr << "Could not allocate video frame" << std::endl;
        return false;
    }

    frame->format = codec_context->pix_fmt;
    frame->width = codec_context->width;
    frame->height = codec_context->height;
    frame->linesize[0] = frame->width*4;

    // Allocate the buffer for the frame data
    if (av_image_alloc(frame->data, frame->linesize, width, height, codec_context->pix_fmt, 32) < 0)
    {
        std::cerr << "Could not allocate raw picture buffer" << std::endl;
        return false;
    }

    // Open the input file containing RGBA data
    std::ifstream input(input_file, std::ios::binary);
    if (!input.is_open())
    {
        std::cerr << "Could not open input file" << std::endl;
        return false;
    }

    // Allocate RGBA frame
    AVFrame* rgba_frame = av_frame_alloc();
    if (!rgba_frame)
    {
        std::cerr << "Could not allocate RGBA frame" << std::endl;
        return false;
    }

    rgba_frame->format = AV_PIX_FMT_RGBA;
    rgba_frame->width = width;
    rgba_frame->height = height;
    rgba_frame->linesize[0] = width*4;
    av_image_alloc(rgba_frame->data, rgba_frame->linesize, width, height, AV_PIX_FMT_RGBA, 1);

    // SwsContext for converting RGBA to YUV420P
    SwsContext* sws_context = sws_getContext(width, height, AV_PIX_FMT_RGBA, width,
                                             height, codec_context->pix_fmt, SWS_BILINEAR, nullptr, nullptr, nullptr);

    return true;
}


void codecImp::StartCodecThread(char* input_file)
{
    std::ifstream input(input_file, std::ios::binary);

    // Encode frames
    int frame_count = 0;
    int Ret = -1;
    while (true)
    {
        input.read(reinterpret_cast<char*>(rgba_frame->data[0]), width * height * 4);
        int Readlen = input.gcount();
        if(Readlen <= 0)
        {
            break;
        }
        else
        {
            std::cout<<"read len:"<<Readlen<<std::endl;
        }

        rgba_frame->pts = frame_count;

        sws_scale(sws_context, rgba_frame->data, rgba_frame->linesize, 0, height, frame->data, frame->linesize);

        frame->pts = frame_count++;

        // Send frame to encoder
        if (avcodec_send_frame(codec_context, frame) < 0)
        {
            std::cerr << "Error sending frame to encoder" << std::endl;
            Ret = -1;
            break;
        }

        // Receive packet from encoder
        while (avcodec_receive_packet(codec_context, &pkt) == 0)
        {
            pkt.stream_index = video_stream_index;
            av_packet_rescale_ts(&pkt, codec_context->time_base, video_stream->time_base);
            // pkt.pos = -1;
            if (av_interleaved_write_frame(format_context, &pkt) < 0)
            {
                std::cerr << "Error writing frame" << std::endl;
                return -1;
            }
            av_packet_unref(&pkt);
        }
    }
}

void codecImp::SendFrameToCodec(uint8_t* frame, int width, int height)
{

}

uint8_t* codecImp::PubEncodeFrame()
{

}

void codecImp::StopCodec()
{
    std::cout<<"write tail"<<std::endl;

    // Write file trailer
    av_write_trailer(format_context);
}
