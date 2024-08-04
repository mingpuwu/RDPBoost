#ifndef CLIENTCOMMUNICATE_H
#define CLIENTCOMMUNICATE_H

#include "DecodeImp.h"
#include "ProtoParse.h"
#include <string>
#include <functional>
#include <memory>
#include <list>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <winsock2.h>
#include <map>
#include <vector>
#include <iostream>

using std::string;

using ConnectCallBack = std::function<int(bool)>;

using MessageRecvCallBack = std::function<void(uint8_t *, int, int)>;

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
    MESSAGE_TYPE_MOUSE,
    MESSAGE_TYPE_MOUSE_PRESS,
    MESSAGE_TYPE_KEYBOARD,
    MESSAGE_TYPE_STATUS,
};

enum class CommunicateType
{
    COMMUNICATE_TYPE_CLIENT = 0,
    COMMUNICATE_TYPE_SERVER,
};

class Communicate
{
public:
    Communicate(CommunicateType type);

    virtual ~Communicate();

    bool Start();

    bool Stop();

    bool CSendMessage(std::vector<uint8_t> message);

    bool CSendMessage(std::string message);

    SOCKET GetSocket();

    void RegisterCallBack(CommunicateMessageType eventType, MessageRecvCallBack callback)
    {
        CallBackList[eventType] = callback;
    }

private:
    bool CommunicateThreadStart();

    bool NetThreadStart();

    void ProcessMessageAsClient();

    void ProcessMessageAsServer();

    int ConnectCallBackHandler(bool status);

    bool Connect(string Id);

    void NetMachineState();

private:
    std::list<std::vector<uint8_t>> SendMessageList;

    std::mutex MessageListMutex;
    std::condition_variable cv;

    RCState State;

    std::thread EventWorker;
    std::thread NetWorker;

    SOCKET client_socket;

    DecodeImp *DecodeImpInstance;

    std::map<CommunicateMessageType, MessageRecvCallBack> CallBackList;

    CommunicateType type;

    std::string ProcessDatabuffer_server;
    std::string ProcessDatabuffer_client;

    ProtoParse ProtoParseI;
};
#endif // CLIENTCOMMUNICATE_H
