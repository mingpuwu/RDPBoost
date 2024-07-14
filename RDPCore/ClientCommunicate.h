#ifndef CLIENTCOMMUNICATE_H
#define CLIENTCOMMUNICATE_H

#include "RemoteProtocol.h"
#include "DecodeImp.h"

#include <string>
#include <functional>
#include <memory>
#include <list>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <winsock2.h>
#include <map>
#include <iostream>

using std::string;

using ConnectCallBack = std::function<int(bool)>;

using MessageRecvCallBack = std::function<void(uint8_t *, int)>;

enum class RCState
{
    RC_STATE_INIT = 0,
    RC_STATE_CONNECTING,
    RC_STATE_READY,
    RC_STATE_CLOSED,
};

enum class CommunicateMessageType
{
    MESSAGE_TYPE_VIDEO = 0,
};

class ClientCommunicate
{
public:
    ClientCommunicate();

    virtual ~ClientCommunicate();

    bool Start();

    bool Stop();

    bool SendMessage(std::shared_ptr<RemoteMessage> message);

    SOCKET GetSocket();

    void RegisterCallBack(CommunicateMessageType eventType, MessageRecvCallBack callback)
    {
        CallBackList[eventType] = callback;
    }

private:
    bool CommunicateThreadStart();

    bool NetThreadStart();

    void ProcessMessage();

    bool Connect(string Id, ConnectCallBack cb);

    void NetMachineState();

private:
    std::list<std::shared_ptr<RemoteMessage>> SendMessageList;

    std::mutex MessageListMutex;

    std::condition_variable cv;

    RCState State;

    std::thread EventWorker;
    std::thread NetWorker;

    SOCKET client_socket;

    DecodeImp *DecodeImpInstance;

    std::map<CommunicateMessageType, MessageRecvCallBack> CallBackList;
};
#endif // CLIENTCOMMUNICATE_H
