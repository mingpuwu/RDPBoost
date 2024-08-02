#include <iostream>
#include "../RDPCore/ProtoParse.h"
#include <string>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream readfile("output_file.bin",std::ios::binary);
    
    ProtoParse Protoi;
    std::vector<uint8_t> buffer(40);
    std::cout<<"buffer size:"<<buffer.size()<<std::endl;
    int bytesRead;
    std::string ProcessDatabuffer;
    int count = 0;
    int readcount = 0;

    while ((bytesRead = readfile.readsome(reinterpret_cast<char*>(&buffer[0]),buffer.capacity())) > 0)
    {
        readcount++;
        std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<std::endl;
        std::cout<<"readlen:"<<static_cast<int>(bytesRead)<<std::endl;
        // std::cout<<"push pakcet:"<<buffer.size()<<std::endl;
        ProcessDatabuffer.insert(ProcessDatabuffer.end(), buffer.begin(), buffer.begin()+bytesRead);

        std::vector<std::string> messages;
        std::string remainbuffer;
        if(Protoi.ExtractorMesssage(ProcessDatabuffer, messages, remainbuffer))
        {
            std::cout<<"extractor message len:"<<messages.size()<<std::endl;
            count = count + messages.size();
        }

        ProcessDatabuffer = remainbuffer;
    }

    std::cout<<"readcount:"<<readcount<<std::endl;
    std::cout<<"count:"<<count<<std::endl;
} 