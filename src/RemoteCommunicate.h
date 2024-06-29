#ifndef REMOTECOMMUNICATE_H
#define REMOTECOMMUNICATE_H

#include "RemoteProtocol.h"

#include <string>
#include <functional>
#include <memory>
#include <list>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <iostream>
#include <winsock2.h>

using std::string;

using ConnectCallBack = std::function<int(bool)>;

enum class WorkMode
{
    WORK_MODE_CLIENT = 0,
    WORK_MODE_SERVER = 1,
};

class RemoteCommunicate
{
public:
    RemoteCommunicate(WorkMode mode);

    virtual ~RemoteCommunicate();

    bool Connect(string Id, ConnectCallBack cb);

    bool DisConnect();

    bool SendMessage(std::shared_ptr<RemoteMessage> message);

private:
    bool CommunicateThreadStart();

    bool NetThreadStart();

    void NetMessageHandler();

private:
    std::list<std::shared_ptr<RemoteMessage>> SendMessageList;

    std::mutex MessageListMutex;

    std::condition_variable cv;

    //连接状态
    bool ConnectStatus;

    std::thread EventWorker;
    std::thread NetWorker;

    SOCKET client_socket;

    WorkMode workmode;
};
#endif // REMOTECOMMUNICATE_H
