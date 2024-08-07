#include "Communicate.h"
#include "DecodeImp.h"
#include "Logger.h"
#include "Server.h"
#include "ProtoParse.h"
#include "../Proto/RDPBoost.pb.h"
#include "ProtoParse.h"
#include <iostream>
#include <thread>
#include <mutex>
#include <iostream>
#include <vector>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

#define RELAY_IP "111.229.134.166"
#define RELAY_PORT 21220

int Communicate::ConnectCallBackHandler(bool status)
{
    std::cout << "connect success callback" << std::endl;
    ProtoMessage sendMessage;
    sendMessage.set_type(ProtoMessage_DataType::ProtoMessage_DataType_ENDPOINT_INFO);
    string id("testid");
    sendMessage.mutable_endpointinfoi()->set_id(id);
    if(type == CommunicateType::COMMUNICATE_TYPE_CLIENT)
    {
        LOGGER_INFO("Set communicate type client");
        sendMessage.mutable_endpointinfoi()->set_type(EndPointInfo_EndPointType::EndPointInfo_EndPointType_IS_CLIENT);
    }
    else
    {
        LOGGER_INFO("Set communicate type server");
        sendMessage.mutable_endpointinfoi()->set_type(EndPointInfo_EndPointType::EndPointInfo_EndPointType_IS_SERVER);
    }

    LOGGER_INFO("EndPointinfo Serializeto array");
    int infosize = sendMessage.ByteSizeLong();
    LOGGER_INFO("EndPointinfo Serializeto infosize {}",infosize);
    std::vector<uint8_t> message(infosize);
    LOGGER_INFO("EndPointinfo Serializeto vector size {}",message.size());

    sendMessage.SerializeToArray(static_cast<void*>(message.data()), static_cast<int>(message.size()));

    LOGGER_INFO("EndPointinfo send to message list");

    this->CSendMessage(message);
    
    return 0;
}

Communicate::Communicate(CommunicateType t):State(RCState::RC_STATE_INIT),type(t)
{
    LOGGER_INFO("{} Communicate Create",static_cast<uint8_t>(type));
}

Communicate::~Communicate()
{
    LOGGER_INFO("{} Communicate delete",static_cast<uint8_t>(type));
    Stop();
    // TODO how stop thread
}

// blocking api
bool Communicate::Connect(string Id)
{
    // JUST connect relay
    sockaddr_in server_address;
    const char *server_ip = RELAY_IP; // 服务器IP地址
    int server_port = RELAY_PORT;     // 服务器端口号

    // 创建Socket
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
    {
        LOGGER_ERROR("{} Socket creation failed", static_cast<uint8_t>(type));
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
            LOGGER_ERROR("Connection to server failed, server ip:{},prot:{}", server_ip, server_port);
            closesocket(client_socket);
            std::this_thread::sleep_for(std::chrono::seconds(1));
            continue;
        }
        else
        {
            LOGGER_INFO("{} Connection success", static_cast<uint8_t>(type));
            ConnectCallBackHandler(true);
            break;
        }
    }

    return true;
}

bool Communicate::Start()
{
    LOGGER_INFO("{} Communicate Start",static_cast<uint8_t>(type));
    
    if(type == CommunicateType::COMMUNICATE_TYPE_CLIENT)
    {
        DecodeImpInstance = new DecodeImp();

        if(DecodeImpInstance->Init() < 0)
        {
            LOGGER_ERROR("DecodeImp init error");
            return false;
        }
    }

    this->CommunicateThreadStart();

    return this->NetThreadStart();
}

bool Communicate::Stop()
{
    LOGGER_INFO("{} Stop",static_cast<uint8_t>(type));
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

bool Communicate::CSendMessage(std::vector<uint8_t> message)
{
    // std::cout << "push message to list back" << std::endl;
    std::vector<uint8_t> head(PROTOHEAD_FLAG.begin(), PROTOHEAD_FLAG.end());
    head.resize(8);
    uint32_t len = message.size();
    std::memcpy(head.data()+PROTOHEAD_FLAG.length(), &len, sizeof(uint32_t));
    message.insert(message.begin(), head.begin(), head.end());

    std::unique_lock<std::mutex> lc(this->MessageListMutex);
    this->SendMessageList.push_back(message);
    this->cv.notify_all();

    return true;
}

bool Communicate::CSendMessage(std::string message)
{
    std::string head{PROTOHEAD_FLAG};
    head.resize(8);
    uint32_t len = message.length();
    std::memcpy(&head[0]+PROTOHEAD_FLAG.length(), &len, sizeof(uint32_t));
    message.insert(0,head);
    std::vector<uint8_t> vec(message.begin(), message.end());

    std::unique_lock<std::mutex> lc(this->MessageListMutex);
    this->SendMessageList.push_back(vec);
    this->cv.notify_all();

    return true;
}

bool Communicate::CommunicateThreadStart()
{
    LOGGER_INFO("{} CommunicateThreadStart",static_cast<uint8_t>(type));

    EventWorker = std::thread([this]
                              {
        while(1)
        {
            std::unique_lock<std::mutex> lc(this->MessageListMutex);
            while(this->SendMessageList.size() == 0)
                this->cv.wait(lc);
            std::vector<uint8_t> message =  SendMessageList.front();
            SendMessageList.pop_front();
            // LOGGER_INFO("send message size {}",message.size());
            const char* sendPoint = reinterpret_cast<char*>(message.data());
            int sendLen = send(client_socket, sendPoint, message.size(), 0);
            if(sendLen != message.size())
            {
                LOGGER_ERROR("sendLen message error size {}",sendLen);
            }
            else
            {
                // LOGGER_INFO("sendLen message size {}",sendLen);
            }
            // std::cout<<"message type "<<static_cast<int>(id)<<std::endl;
            // std::cout<<"consumer message: list size:"<<SendMessageList.size()<<std::endl;
        } });

    EventWorker.detach();

    return true;
}

bool Communicate::NetThreadStart()
{
    LOGGER_INFO("{} NetThreadStart",static_cast<uint8_t>(type));

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
    std::vector<uint8_t> buffer(8192);
    ProtoMessage recvMessage;
    int bytes_received = recv(client_socket, reinterpret_cast<char*>(&buffer[0]), buffer.capacity(), 0);
    if (bytes_received == SOCKET_ERROR || bytes_received == 0)
    {
        LOGGER_ERROR("{} Receiving failed, close socket",static_cast<uint8_t>(type));
        closesocket(client_socket);
        client_socket = -1;
        LOGGER_ERROR("{} go to RC_STATE_CLOSED",static_cast<uint8_t>(type));
        this->State = RCState::RC_STATE_CLOSED;
        DecodeImpInstance->CloseRecored();
        return;
    }
    else
    {
        //LOGGER_INFO("recv data len {}", bytes_received);
        ProcessDatabuffer_client.insert(ProcessDatabuffer_client.end(), buffer.begin(), buffer.begin() + bytes_received);

        std::vector<std::string> Messages;
        std::string remainbuffer;
        if(ProtoParseI.ExtractorMesssage(ProcessDatabuffer_client, Messages, remainbuffer))
        { 
            for(auto oneMessage : Messages)
            {
                if(!recvMessage.ParseFromArray(static_cast<void*>(&oneMessage[0]), oneMessage.length()))
                {
                    LOGGER_ERROR("client parse message error");
                    return;
                }

                if(recvMessage.type() == ProtoMessage_DataType::ProtoMessage_DataType_VIDEO_MESSAGE)
                {
                    LOGGER_INFO("recv video message");
                    PlayCallBack callbackfunction = CallBackList[CommunicateMessageType::MESSAGE_TYPE_VIDEO];
                    if (callbackfunction == nullptr)
                    {
                        LOGGER_ERROR("{} not find callbackfunction", static_cast<int>(type));
                    }
                    const VideoMessage& videoMessageI = recvMessage.videmessagei();
                    videoMessageI.width();
                    LOGGER_INFO("{} recv video message width:{} height:{}", videoMessageI.width(), videoMessageI.height());

                    char* dataPoint = const_cast<char*>(videoMessageI.data().c_str());
                    const string &dataString = videoMessageI.data();
                    int dataSize = dataString.size();
                    DecodeImpInstance->DecodeHandlerFrame(reinterpret_cast<uint8_t*>(dataPoint),
                                                          dataSize,
                                                          callbackfunction);
                }
            }
        }

        ProcessDatabuffer_client = remainbuffer;
    }
}

void Communicate::ProcessMessageAsServer()
{
    // 接收中继服务器的响应
    std::vector<uint8_t> buffer(8192);
    ProtoMessage recvMessage;

    int bytes_received = recv(client_socket, reinterpret_cast<char*>(&buffer[0]), buffer.capacity(), 0);
    if (bytes_received == SOCKET_ERROR || bytes_received == 0)
    {
        LOGGER_ERROR("{} Receiving failed, close socket", static_cast<uint8_t>(type));
        closesocket(client_socket);
        client_socket = -1;
        LOGGER_ERROR("{} go to RC_STATE_CLOSED", static_cast<uint8_t>(type));
        this->State = RCState::RC_STATE_CLOSED;
        return;
    }
    else
    {
        //LOGGER_INFO("Recv data len {}",bytes_received);
        ProcessDatabuffer_server.insert(ProcessDatabuffer_server.end(), buffer.begin(), buffer.begin() + bytes_received);

        std::vector<std::string> Messages;
        std::string remainbuffer;

        if (ProtoParseI.ExtractorMesssage(ProcessDatabuffer_server, Messages, remainbuffer))
        {
            //LOGGER_INFO("extractor message {}",Messages.size());
            for (auto oneMessage : Messages)
            {
                //LOGGER_INFO("oneMessage len {}",oneMessage.length());

                // for(int i = 0; i < oneMessage.length(); i++)
                // {
                //     LOGGER_INFO("oneMessagei {}",static_cast<int>(oneMessage[i]));
                // }

                if (!recvMessage.ParseFromString(oneMessage))
                {
                    LOGGER_ERROR("server parse message error");
                    continue;
                }

                if (recvMessage.type() == ProtoMessage_DataType::ProtoMessage_DataType_STATUS_INFO)
                {
                    LOGGER_INFO("recv status message");
                    ServerCallBack callbackfunction = CallBackList[CommunicateMessageType::MESSAGE_TYPE_STATUS];
                    if (callbackfunction == nullptr)
                    {
                        LOGGER_ERROR("{} not find status callbackfunction", static_cast<uint8_t>(type));
                        continue;
                    }

                    const StatusMessage& statusMessageI = recvMessage.statusmessagei();
                    StatusMessage_StatusType status = statusMessageI.status();
                    if (status == StatusMessage_StatusType::StatusMessage_StatusType_CLIENT_ONLINE)
                    {
                        LOGGER_INFO("recv Client online");
                        callbackfunction(nullptr, 1, 0);
                    }
                    else
                    {
                        LOGGER_INFO("recv Client offline");
                        callbackfunction(nullptr, 0, 0);
                    }
                }
                else if (recvMessage.type() == ProtoMessage_DataType::ProtoMessage_DataType_MOUSE_MESSAGE)
                {
                    ServerCallBack callbackfunction = CallBackList[CommunicateMessageType::MESSAGE_TYPE_MOUSE];
                    if (callbackfunction == nullptr)
                    {
                        LOGGER_ERROR("{} not find callbackfunction", static_cast<uint8_t>(type));
                        continue;
                    }

                    callbackfunction(nullptr, 0, 0);
                }
            }
        }

        ProcessDatabuffer_server = remainbuffer;
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
            LOGGER_INFO("{} go to RC_STATE_CONNECTING state",static_cast<uint8_t>(type));
            this->State = RCState::RC_STATE_CONNECTING;
        }
        break;

    case RCState::RC_STATE_CONNECTING:
        if (Connect("testid"))
        {
            LOGGER_INFO("{} go to RC_STATE_READY state", static_cast<uint8_t>(type));
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
