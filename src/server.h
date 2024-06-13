#ifndef SERVER_H
#define SERVER_H

class Server
{
public:
    Server();

    bool Init();

    bool Start();

private:
    void ScreenCapture();

    bool SendVideoStream();

};

#endif // SERVER_H
