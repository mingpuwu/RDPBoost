#include "Logger.h"
#include "ProtoParse.h"
#include <vector>
#include <iostream>

//head format: aa 44 12 00 len len len len
const std::string PROTOHEAD_FLAG = "\xAA\x44\x12";
static constexpr uint32_t PROTOHEAD_FLAG_LEN = 4;
static constexpr uint32_t PROTOHEAD_LEN = 8;

ProtoParse::ProtoParse()
{

}

ProtoParse::~ProtoParse()
{

}

int ProtoParse::getOnedata(std::string& input, size_t start_index, std::string &message)
{
    if(input.length() < PROTOHEAD_LEN)
    {
        std::cout<<"length is:"<<input.length()<<std::endl;
        return -1;
    }
    uint8_t sync0;
    uint8_t sync1;
    uint8_t sync2;
    
    sync0 = static_cast<uint8_t>(input[start_index]);
    sync1 = static_cast<uint8_t>(input[start_index+1]);
    sync2 = static_cast<uint8_t>(input[start_index+2]);

    //std::cout<<"sync0:"<<std::hex<<static_cast<int>(sync0&0xFF)<<std::endl;

    if(sync0 != static_cast<uint8_t>(PROTOHEAD_FLAG[0]) ||
       sync1 != static_cast<uint8_t>(PROTOHEAD_FLAG[1]) ||
       sync2 != static_cast<uint8_t>(PROTOHEAD_FLAG[2]))
    {
        return -2;
    }

    //std::cout<<"start_index:"<<start_index<<std::endl;

    for(int i = 0; i < 4; i++)
    {
        int data = static_cast<int>(input[start_index+PROTOHEAD_FLAG_LEN+i] & 0xFF);
        //std::cout<<"0x"<<std::hex<<data<<std::endl;
    }

    size_t data_length = ParseUInt32(reinterpret_cast<const uint8_t*>(&input[start_index+PROTOHEAD_FLAG_LEN]));
    
    if(data_length+PROTOHEAD_LEN > input.length()-start_index)
    {
        std::cout<<"error data_length:"<<data_length<<std::endl;
        return -1;
    }

    message.resize(data_length);
    std::copy(&input[start_index], &input[start_index+data_length], &message[0]);

    return data_length+PROTOHEAD_LEN;
}

bool ProtoParse::ExtractorMesssage(std::string &input,
                                   std::vector<std::string> &Messages,
                                   std::string &remainbuffer)
{
    size_t sentence_start = 0;
    bool parse_error = false;

    std::cout<<"input data:"<<input.length()<<std::endl;
    std::cout<<"input data size:"<<input.size()<<std::endl;

    while(sentence_start != std::string::npos && sentence_start < input.size())
    {
        size_t start_index = input.find(PROTOHEAD_FLAG, sentence_start);
        if(start_index == std::string::npos)
        {
            std::cout<<"not find start index"<<std::endl;
            remainbuffer = input.substr(sentence_start);
            break;
        }

        std::cout<<"find start_index:"<<start_index<<std::endl;

        //std::cout<<"start index:"<<std::hex<<static_cast<int>(input[0] & 0xFF)<<std::endl;

        std::string oneMessage;
        int result = getOnedata(input, start_index, oneMessage);

        if(result > 0)
        {
            Messages.push_back(oneMessage);
            sentence_start = start_index+result;
        }
        else if(result == -1)
        {
            //sentence is not complete
            std::cout<<"sentence is not complete:"<<start_index<<std::endl;
            remainbuffer = input.substr(start_index);
            std::cout<<"remainbuffer len:"<<remainbuffer.length()<<std::endl;
            break;
        }
        else
        {
            std::cout<<"parse_error"<<std::endl;
            sentence_start+=1;
            parse_error = true;
        }

    }

    return !parse_error;
}

