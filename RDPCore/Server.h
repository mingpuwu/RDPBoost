#ifndef SERVER_H
#define SERVER_H

#include "EncodeImp.h"
#include "Communicate.h"
#include <windows.h>

using ServerCallBack = std::function<void(uint8_t*, int, int)>;

class Server
{
public:
    Server(){};

    bool Init();

    void StartScreenCapture();

    void StopScreenCapture();

    void PauseScreenCapture();

    void ResumeScreenCapture();

    void MoveMouse(int x, int y);

    void ClickMouse(int x, int y, DWORD buttonFlags);

    void WrapSendOneFrame(uint8_t* data, int size);

    EnCodeImp* EncodeImpI;

private:
    void ScreenCapture();

    bool SendVideoStream();

    void clientStatusNotify(int status);

    void Server::ScreenCaptureThreadHandler();
private:
    Communicate* RemServerPoint;

    bool ClientStatus; //peer client is online or offline

    int ScreenCaptureRunFlag;
};

#endif // SERVER_H
