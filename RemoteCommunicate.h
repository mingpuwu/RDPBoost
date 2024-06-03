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

private:
    std::list<std::shared_ptr<RemoteMessage>> SendMessageList;

    std::mutex MessageListMutex;

    std::condition_variable cv;

    //连接状态
    bool ConnectStatus;

    std::thread Worker;

};
#endif // REMOTECOMMUNICATE_H
