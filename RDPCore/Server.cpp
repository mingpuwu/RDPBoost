#include "Server.h"
#include "Communicate.h"
#include "CdxgiCaptureImpl.h"
#include "EnCodeImp.h"
#include "../Proto/RDPBoost.pb.h"
#include "Logger.h"
#include <iostream>
#include <fstream>
#include <thread>
#include <Windows.h>

void Server::ScreenCaptureThreadHandler()
{
    LoggerI()->info("ScreenCaptureThreadHandler start");

    CDxgiCaptureImpl *impl = new CDxgiCaptureImpl(false);
    EnCodeImp* EncodeImpI = new EnCodeImp();

    EncodeImpI->SetHandlerOneFrame([this](uint8_t* data, int size) {
        WrapSendOneFrame(data, size);   
    });

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
        if(ScreenCaptureRunFlag == 2)
        {
            // LoggerI()->info("wait client connect.....");
            std::this_thread::sleep_for(std::chrono::seconds(1));
            continue;
        }

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
                //LoggerI()->warn("capture timeout");
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
    ScreenCaptureRunFlag = 2;

    std::thread ScreenCaptureThread(std::bind(&Server::ScreenCaptureThreadHandler, this), nullptr);
    ScreenCaptureThread.detach();
}

void Server::PauseScreenCapture()
{
    LoggerI()->info("pause screen");
    ScreenCaptureRunFlag = 2;
}

void Server::ResumeScreenCapture()
{
    LoggerI()->info("resume screen");
    ScreenCaptureRunFlag = 1;
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

bool Server::Init()
{
    RemServerPoint = new Communicate(CommunicateType::COMMUNICATE_TYPE_SERVER);
    if (RemServerPoint == nullptr)
    {
        LoggerI()->info("make shared RemServerPoint error");
    }

    RemServerPoint->RegisterCallBack(CommunicateMessageType::MESSAGE_TYPE_MOUSE,
                                    [this](uint8_t* data, int x, int y){
                                        MoveMouse(x, y);
                                     });

    RemServerPoint->RegisterCallBack(CommunicateMessageType::MESSAGE_TYPE_STATUS,
                                    [this](uint8_t* data, int x, int y){
                                        clientStatusNotify(x);
                                     });

    
    RemServerPoint->Start(); 
}

void Server::WrapSendOneFrame(uint8_t* data, int size)
{
    ProtoMessage message;
    message.set_type(ProtoMessage_DataType::ProtoMessage_DataType_VIDEO_MESSAGE);
    message.mutable_videmessagei()->set_width(1920);
    message.mutable_videmessagei()->set_height(1080);
    message.mutable_videmessagei()->set_frame_rate(30);
    message.mutable_videmessagei()->set_data(reinterpret_cast<char*>(data), size);

    RemServerPoint->SendMessage(message.SerializeAsString());
}

void Server::MoveMouse(int x, int y)
{
    //need map to widget
    LoggerI()->info("move mouse to {} {}", x, y);
    SetCursorPos(x, y);
}

void Server::ClickMouse(int x, int y, DWORD buttonFlags)
{
    //need map to widget
    LoggerI()->info("click mouse {}", buttonFlags);
    mouse_event(buttonFlags, x, y, 0, 0);
}

void Server::clientStatusNotify(int status)
{
    if(status == 1)
    {
        LoggerI()->info("client connect");
        ResumeScreenCapture();
    }
    else
    {
        LoggerI()->info("client disconnect");
        PauseScreenCapture();
    }
}
