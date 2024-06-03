#include "RemoteCommunicate.h"
#include "RemoteProtocol.h"
#include <iostream>
#include <thread>
#include <mutex>

RemoteCommunicate::RemoteCommunicate()
{
    ConnectStatus = false;
    CommunicateThreadStart();
}

RemoteCommunicate::~RemoteCommunicate()
{
    std::cout<<"RemoteCommunicate delete"<<std::endl;
    //TODO how stop thread
}

bool RemoteCommunicate::Connect(string Id, ConnectCallBack cb)
{
    return true;
}

bool RemoteCommunicate::SendMessage(std::shared_ptr<RemoteMessage> message)
{
    std::cout<<"push message to list back"<<std::endl;
    std::unique_lock<std::mutex> lc(this->MessageListMutex);
    this->SendMessageList.push_back(message);
    this->cv.notify_all();

    return true;
}

bool RemoteCommunicate::CommunicateThreadStart()
{
    std::cout<<"CommunicateThreadStart"<<std::endl;
    
    Worker = std::thread([this]{
        while(1)
        {
            std::unique_lock<std::mutex> lc(this->MessageListMutex);
            while(this->SendMessageList.size() == 0)
                this->cv.wait(lc);
            std::shared_ptr<RemoteMessage> message =  SendMessageList.front();
            SendMessageList.pop_front();
            MessageType id = message->GetMessageType();

            std::cout<<"message type "<<static_cast<int>(id)<<std::endl;
            std::cout<<"consumer message: list size:"<<SendMessageList.size()<<std::endl;
        }
    });

    Worker.detach();

    return true;
}
