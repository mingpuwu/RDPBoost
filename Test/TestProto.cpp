#include <iostream>
#include <fstream>
#include "../Proto/RDPBoost.pb.h"

int main()
{
    std::ifstream readstream("savefile");
    char Readbuffer[256] = "";
    readstream.read(Readbuffer, sizeof(Readbuffer));
    std::cout<<"read count:"<<readstream.gcount()<<std::endl;

    ProtoMessage recvMessage;
    if(!recvMessage.ParseFromArray(static_cast<void*>(Readbuffer), readstream.gcount()))
    {
        std::cout<<"parse message error"<<std::endl;
        return 0;
    }

    const VideoMessage& videoMessageI = recvMessage.videmessagei();
    std::cout<<videoMessageI.width()<<std::endl;
}