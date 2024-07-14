#include "Server.h"
#include "CdxgiCaptureImpl.h"
#include "EnCodeImp.h"
#include "Logger.h"
#include <iostream>
#include <fstream>
#include <thread>
#include <Windows.h>

static int ScreenCaptureRunFlag = 0;

static void ScreenCaptureThreadHandler(void* arg)
{
    LoggerI()->info("ScreenCaptureThreadHandler start");

    CDxgiCaptureImpl *impl = new CDxgiCaptureImpl(false);
    EnCodeImp* EncodeImpI = new EnCodeImp();

    if(EncodeImpI->Init() < 0)
    {
        LoggerI()->error("encode init error");
        return;
    }
    TDxgiAdapterOutput out = impl->get(L"");
    BOOL bRet = impl->InitDxgiCapture(out);
    if (!bRet)
    {
        LoggerI()->error("InitDxgiCapture Error");
        return;
    }

    INT nWidthPicth = 0;
    void *pVideoData = NULL;
    ID3D11Texture2D *pVideoTexture = NULL;

    #ifdef DEBUG
    std::ofstream outfile("TestRawCap.video",std::ios::binary);
    #endif

    uint8_t* pBitsCopy = new uint8_t[1920*1080*4];

    while (ScreenCaptureRunFlag)
    {
        pVideoTexture = NULL;
        pVideoData = NULL;
        nWidthPicth = 0;

        if (impl->CaptureScreen(&pVideoTexture, &pVideoData, nWidthPicth))
        {
            if (pVideoTexture)//纹理捕获成功
            {
                LoggerI()->info("capture video succuess");
            }
            else if (nWidthPicth > 0)//视频数据捕获成功  pVideoData就是视频RGBA数据
            {
                LoggerI()->debug("read raw RGBA data");
                int width = 1920; // 图像宽度
                int height = 1080; // 图像高度
                int bytesPerPixel = 4; // 每像素字节数（例如：RGBA 格式）
                int pitch = nWidthPicth; // 行字节数

                uint8_t* pBits = reinterpret_cast<uint8_t*>(pVideoData);

                #ifdef DEBUG
                // EncodeImpI->SendFrameToCodec(pBitsCopy, width, height);
                outfile.write(reinterpret_cast<char*>(pBits), width*bytesPerPixel*height);
                #endif

                EncodeImpI->HandlerFrameToEncode(pBits, width*bytesPerPixel*height);

                impl->ReleaseFrame();
            }
            else
            {
                LoggerI()->warn("capture timeout");
            }
        }
        else
        {
            LoggerI()->warn("capture error,continue");
            // break;
        }
        Sleep(50);
    }

    LoggerI()->info("ScreenCapture thread stop");

    #ifdef DEBUG
    outfile.flush();
    outfile.close();
    #endif

    impl->UnInitDxgiCapture();
    
    return;
}

void Server::StartScreenCapture()
{
    LoggerI()->info("start capture screen");
    ScreenCaptureRunFlag = 1;

    std::thread ScreenCaptureThread(ScreenCaptureThreadHandler, nullptr);
    ScreenCaptureThread.detach();
}

void Server::StopScreenCapture()
{
    LoggerI()->info("stop screen");
    ScreenCaptureRunFlag = 0;
}

bool Server::SendVideoStream()
{
    return true;
}
