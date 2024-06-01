#ifndef REMOTECOMMUNICATE_H
#define REMOTECOMMUNICATE_H

#include <string>
#include <functional>
#include "RemoteProtocol.h"
#include <memory>
#include <list>
#include <mutex>
#include <condition_variable>

using std::string;

class RemoteCommunicate
{
public:
    RemoteCommunicate();

    virtual ~RemoteCommunicate();

    bool Connect(string Id, std::function<int(bool)> ConnectCallBack);

    bool SendMessage(std::shared_ptr<RemoteMessage> message);

private:
    bool CommunicateThreadStart();

    std::list<std::shared_ptr<RemoteMessage>> SendMessageList;

    std::mutex MessageListMutex;

    std::condition_variable cv;
};
#endif // REMOTECOMMUNICATE_H
