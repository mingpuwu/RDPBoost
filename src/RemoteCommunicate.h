#ifndef REMOTECOMMUNICATE_H
#define REMOTECOMMUNICATE_H

#include <string>
#include <functional>
#include "RemoteProtocol.h"
#include <memory>
#include <list>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <iostream>
#include <winsock2.h>

using std::string;

using ConnectCallBack = std::function<int(bool)>;

class RemoteCommunicate
{
public:
    RemoteCommunicate();

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
};
#endif // REMOTECOMMUNICATE_H
