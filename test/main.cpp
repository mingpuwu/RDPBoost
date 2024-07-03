#include "EncodeImp.h"
#include "DecodeImp.h"

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::cout<<"start test Decode........."<<std::endl;
    std::string TestDecodeFile("../output.h264");

    DecodeImp DecodeInstance;
    if(DecodeInstance.Init() < 0)
    {
        std::cout<<"init error"<<std::endl;
        return -1;
    }

    char buffer[4096] = "";
    std::ifstream readfile(TestDecodeFile.c_str(), std::ios::binary);
    while(readfile.read(buffer, sizeof(buffer)))
    {
        int readSize = readfile.gcount();
        DecodeInstance.DecodeHandlerFrame(reinterpret_cast<uint8_t*>(buffer), readSize);
    }
    std::cout<<"end test Decode........."<<std::endl;

    std::cout<<"start test Encode........."<<std::endl;
    std::string TestEncodeFile("../RecordRgba.raw");

    EnCodeImp EnCodeImpInstance;
    if(EnCodeImpInstance.Init()<0)
    {
        std::cout<<"init EnCodeImpInstance error"<<std::endl;
        return -1;
    }

    char* buffer2 = new char[1920*1080*4];
    std::ifstream readRawfile(TestEncodeFile.c_str(), std::ios::binary);
    while(readRawfile.read(buffer2, 1920*1080*4))
    {
        int readSize = readRawfile.gcount();
        EnCodeImpInstance.HandlerFrameToEncode(reinterpret_cast<uint8_t*>(buffer2), readSize);
    }
}