#ifndef REMOTECOMMUNICATE_H
#define REMOTECOMMUNICATE_H

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

using std::string;

using ConnectCallBack = std::function<int(bool)>;

using PlayCallBack = std::function<void(uint8_t*,int)>;

enum class WorkMode
{
    WORK_MODE_CLIENT = 0,
    WORK_MODE_SERVER = 1,
};

enum class RCState
{
    RC_STATE_INIT = 0,
    RC_STATE_CONNECTING,
    RC_STATE_READY,
    RC_STATE_CLOSED,
};

class RemoteCommunicate
{
public:
    RemoteCommunicate(WorkMode mode);

    virtual ~RemoteCommunicate();

    bool DisConnect();

    bool SendMessage(std::shared_ptr<RemoteMessage> message);

    SOCKET GetSocket();

    void SetPlayCallBack(PlayCallBack cb);

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

    WorkMode workmode;

    DecodeImp* DecodeImpInstance;

    PlayCallBack PlayCallBackFunction;
};
#endif // REMOTECOMMUNICATE_H
