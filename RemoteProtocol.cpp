#include "RemoteProtocol.h"

RemoteMessage::RemoteMessage()
{

}

MessageType RemoteMessage::GetMessageType()
{
    return this->type;
}

RemoteMessage::~RemoteMessage()
{

}

RemoteMouseMessage::RemoteMouseMessage()
{
    this->type = MessageType::MouseMessageType;
}
