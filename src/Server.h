#ifndef SERVER_H
#define SERVER_H

#include "EncodeImp.h"

class Server
{
public:
    Server();

    bool Init();

    void StartScreenCapture();

    void StopScreenCapture();

    EnCodeImp* EncodeImpI;

private:
    void ScreenCapture();

    bool SendVideoStream();
private:
};

#endif // SERVER_H
