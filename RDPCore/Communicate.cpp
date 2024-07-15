#include "Communicate.h"
#include "RemoteProtocol.h"
#include "DecodeImp.h"
#include "Logger.h"
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
    std::cout << "connect success callback" << std::endl;

    return 0;
}

Communicate::Communicate(CommunicateType t):State(RCState::RC_STATE_INIT),type(t)
{
    LoggerI()->info("{} Communicate Create",type);
}

Communicate::~Communicate()
{
    LoggerI()->info("{} Communicate delete",type);
    Stop();
    // TODO how stop thread
}

// blocking api
bool Communicate::Connect(string Id, ConnectCallBack cb)
{
    // JUST connect relay
    sockaddr_in server_address;
    const char *server_ip = RELAY_IP; // 服务器IP地址
    int server_port = RELAY_PORT;     // 服务器端口号

    // 创建Socket
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
    {
        LoggerI()->error("{} Socket creation failed", type);
        WSACleanup();
        return false;
    }

    // 设置服务器地址和端口
    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = inet_addr(server_ip);
    server_address.sin_port = htons(server_port);

    // 连接到服务器
    while (1)
    {
        if (connect(client_socket, reinterpret_cast<sockaddr *>(&server_address), sizeof(server_address)) == SOCKET_ERROR)
        {
            LoggerI()->error("Connection to server failed, server ip:{},prot:{}", server_ip, server_port);
            closesocket(client_socket);
            std::this_thread::sleep_for(std::chrono::seconds(1));
            continue;
        }
        else
        {
            LoggerI()->info("{} Connection success", type);
            cb(true);
            break;
        }
    }

    return true;
}

bool Communicate::Start()
{
    LoggerI()->info("{} Communicate Start",type);
    
    if(type == CommunicateType::COMMUNICATE_TYPE_CLIENT)
    {
        DecodeImpInstance = new DecodeImp();

        if(DecodeImpInstance->Init() < 0)
        {
            LoggerI()->error("DecodeImp init error");
            return false;
        }
    }

    this->CommunicateThreadStart();

    return this->NetThreadStart();
}

bool Communicate::Stop()
{
    LoggerI()->info("{} Stop",type);
    // 关闭Socket连接
    closesocket(client_socket);
    // 清理Winsock库
    WSACleanup();

    return true;
}

SOCKET Communicate::GetSocket()
{
    return client_socket;
}

bool Communicate::SendMessage(std::shared_ptr<RemoteMessage> message)
{
    // std::cout << "push message to list back" << std::endl;
    std::unique_lock<std::mutex> lc(this->MessageListMutex);
    this->SendMessageList.push_back(message);
    this->cv.notify_all();

    return true;
}

bool Communicate::CommunicateThreadStart()
{
    LoggerI()->info("{} CommunicateThreadStart",type);

    EventWorker = std::thread([this]
                              {
        while(1)
        {
            std::unique_lock<std::mutex> lc(this->MessageListMutex);
            while(this->SendMessageList.size() == 0)
                this->cv.wait(lc);
            std::shared_ptr<RemoteMessage> message =  SendMessageList.front();
            SendMessageList.pop_front();
            MessageType id = message->GetMessageType();

            // std::cout<<"message type "<<static_cast<int>(id)<<std::endl;
            // std::cout<<"consumer message: list size:"<<SendMessageList.size()<<std::endl;
        } });

    EventWorker.detach();

    return true;
}

bool Communicate::NetThreadStart()
{
    LoggerI()->info("{} NetThreadStart",type);

    NetWorker = std::thread([this]
    {
        while(1)
        {
            NetMachineState();
        } 
    });

    NetWorker.detach();

    return true;
}

void Communicate::ProcessMessageAsClient()
{
    // 接收中继服务器的响应
    char buffer[4096];
    int bytes_received = recv(client_socket, buffer, sizeof(buffer), 0);
    if (bytes_received == SOCKET_ERROR || bytes_received == 0)
    {
        LoggerI()->error("{} Receiving failed, close socket",type);
        closesocket(client_socket);
        client_socket = -1;
        LoggerI()->error("{} go to RC_STATE_CLOSED",type);
        this->State = RCState::RC_STATE_CLOSED;
        DecodeImpInstance->CloseRecored();
        return;
    }
    else
    {
        // std::cout << "recv server message :" << bytes_received << std::endl;
        PlayCallBack callbackfunction = CallBackList[CommunicateMessageType::MESSAGE_TYPE_VIDEO];
        if (callbackfunction == nullptr)
        {
            LoggerI()->error("{} not find callbackfunction", type);
        }
        // std::cout<<"callbackfunction"<<callbackfunction<<std::endl;
        DecodeImpInstance->DecodeHandlerFrame(reinterpret_cast<uint8_t *>(buffer),
                                              bytes_received,
                                              callbackfunction);
    }
}

void Communicate::ProcessMessageAsServer()
{
    // 接收中继服务器的响应
    char buffer[4096];
    int bytes_received = recv(client_socket, buffer, sizeof(buffer), 0);
    if (bytes_received == SOCKET_ERROR || bytes_received == 0)
    {
        LoggerI()->error("{} Receiving failed, close socket", type);
        closesocket(client_socket);
        client_socket = -1;
        LoggerI()->error("{} go to RC_STATE_CLOSED", type);
        this->State = RCState::RC_STATE_CLOSED;
        return;
    }
    else
    {
        // std::cout << "recv server message :" << bytes_received << std::endl;
        MouseCallBack callbackfunction = CallBackList[CommunicateMessageType::MESSAGE_TYPE_MOUSE];
        if (callbackfunction == nullptr)
        {
            LoggerI()->error("{} not find callbackfunction", type);
            return
        }

        callbackfunction(0, 0);
    }
}

void Communicate::NetMachineState()
{
    WSADATA wsa_data;

    switch (State)
    {
    case RCState::RC_STATE_INIT:
        // 初始化Winsock库
        if (WSAStartup(MAKEWORD(2, 2), &wsa_data) != 0)
        {
            std::cout << "WSAStartup failed" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            WSACleanup();
        }
        else
        {
            LoggerI()->info("{} go to RC_STATE_CONNECTING state",type);
            this->State = RCState::RC_STATE_CONNECTING;
        }
        break;

    case RCState::RC_STATE_CONNECTING:
        if (Connect("testid", ConnectCallBackHandler))
        {
            LoggerI()->info("{} go to RC_STATE_READY state", type);
            // DecodeImpInstance->Init();
            this->State = RCState::RC_STATE_READY;
        }
        else
        {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        break;

    case RCState::RC_STATE_READY:
        if(type == CommunicateType::COMMUNICATE_TYPE_CLIENT)
            this->ProcessMessageAsClient();
        else
            this->ProcessMessageAsServer();
        break;

    case RCState::RC_STATE_CLOSED:
        std::this_thread::sleep_for(std::chrono::seconds(1));

        break;
    default:
        break;
    }
}
