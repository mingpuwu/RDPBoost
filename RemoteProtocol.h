#ifndef REMOTEPROTOCOL_H
#define REMOTEPROTOCOL_H

enum class MessageType
{
    MouseMessageType = 0,
};

class RemoteMessage
{
public:
    RemoteMessage();

    virtual ~RemoteMessage();
};

class RemoteMouseMessage
{
public:
    RemoteMouseMessage();

private:
    MessageType type;
};

#endif // REMOTEPROTOCOL_H
