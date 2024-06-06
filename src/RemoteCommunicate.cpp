#include "RemoteCommunicate.h"
#include "RemoteProtocol.h"
#include <iostream>
#include <thread>
#include <mutex>
#include <iostream>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

#define RELAY_IP "111.229.134.166"
#define RELAY_PORT 21220

static int ConnectCallBackHandler(bool status)
{
    std::cout<<"connect success"<<std::endl;

    return 0;
} 

RemoteCommunicate::RemoteCommunicate()
{
    ConnectStatus = false;
    CommunicateThreadStart();
    NetThreadStart();
}

RemoteCommunicate::~RemoteCommunicate()
{
    std::cout<<"RemoteCommunicate delete"<<std::endl;
    DisConnect();
    //TODO how stop thread
}

bool RemoteCommunicate::Connect(string Id, ConnectCallBack cb)
{
    // JUST connect relay
    WSADATA wsa_data;
    sockaddr_in server_address;
    const char* server_ip = RELAY_IP; // 服务器IP地址
    int server_port = RELAY_PORT; // 服务器端口号

    // 初始化Winsock库
    if (WSAStartup(MAKEWORD(2, 2), &wsa_data) != 0) 
    {
        std::cout << "WSAStartup failed" << std::endl;
        return false;
    }

    // 创建Socket
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) 
    {
        std::cout << "Socket creation failed" << std::endl;
        WSACleanup();
        return false;
    }

    // 设置服务器地址和端口
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr(server_ip);
    server_address.sin_port = htons(server_port);

    // 连接到服务器
    if (connect(client_socket, reinterpret_cast<sockaddr*>(&server_address), sizeof(server_address)) == SOCKET_ERROR) 
    {
        std::cout << "Connection to server failed" << std::endl;
        closesocket(client_socket);
        WSACleanup();
        return false;
    }
    
    return true;

}

bool RemoteCommunicate::DisConnect()
{
    std::cout<<"DisConnect"<<std::endl;
    // 关闭Socket连接
    closesocket(client_socket);
    // 清理Winsock库
    WSACleanup();

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
    
    EventWorker = std::thread([this]{
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

    EventWorker.detach();

    return true;
}

bool RemoteCommunicate::NetThreadStart()
{
    std::cout<<"NetThreadStart"<<std::endl;
    
    NetWorker = std::thread([this]{
        this->Connect("testid", ConnectCallBackHandler);
        while(1)
        {
            NetMessageHandler();
        }
    });

    NetWorker.detach();

    return true;
}

void RemoteCommunicate::NetMessageHandler()
{
    // 发送数据到服务器
    const char* message = "Hello, server!";
    if (send(client_socket, message, strlen(message), 0) == SOCKET_ERROR) 
    {
        std::cout << "Sending failed" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        closesocket(client_socket);
        WSACleanup();
        return;
    }

    // 接收服务器的响应
    char buffer[1024];
    int bytes_received = recv(client_socket, buffer, 1024, 0);
    if (bytes_received == SOCKET_ERROR) 
    {
        std::cout << "Receiving failed" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        closesocket(client_socket);
        WSACleanup();
        return;
    }
    else
    {
        std::cout<<"recv server message"<<buffer<<std::endl;
    }
}