#ifndef SERVER_H
#define SERVER_H

#include "EncodeImp.h"
#include "Communicate.h"
#include <windows.h>

using MouseCallBack = std::function<void(uint8_t*, int, int)>;

class Server
{
public:
    Server(){};

    bool Init();

    void StartScreenCapture();

    void StopScreenCapture();

    void MoveMouse(int x, int y);

    void clickMouse(int x, int y, DWORD buttonFlags);

    EnCodeImp* EncodeImpI;

private:
    void ScreenCapture();

    bool SendVideoStream();
private:
    Communicate* RemServerPoint;
};

#endif // SERVER_H
