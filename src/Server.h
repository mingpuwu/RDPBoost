#ifndef SERVER_H
#define SERVER_H

class Server
{
public:
    Server();

    bool Init();

    void StartScreenCapture();

    void StopScreenCapture();

private:
    void ScreenCapture();

    bool SendVideoStream();

};

#endif // SERVER_H
