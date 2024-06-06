#ifndef REMOTEPROTOCOL_H
#define REMOTEPROTOCOL_H

enum class MessageType
{
    MouseMessageType = 10,
};

class RemoteMessage
{
public:
    RemoteMessage();

    MessageType GetMessageType();

    virtual ~RemoteMessage();

public:
    MessageType type;

};

class RemoteMouseMessage:public RemoteMessage
{
public:
    RemoteMouseMessage();
};

#endif // REMOTEPROTOCOL_H
