
#include <iostream>
#include <vector>
#include <memory>
#include <cstring>

//head format: aa 44 12 55 len len len len
const std::string PROTOHEAD_FLAG = "\xAA\x44\x12\x55";
static constexpr uint32_t PROTOHEAD_FLAG_LEN = 4;
static constexpr uint32_t PROTOHEAD_LEN = 8;

int main()
{
    std::vector<uint8_t> message{0x11,0x22,0x33};
    std::vector<uint8_t> head(PROTOHEAD_FLAG.begin(), PROTOHEAD_FLAG.end());
    head.resize(8);
    uint32_t len = message.size();
    std::memcpy(head.data()+PROTOHEAD_FLAG.length(), &len, sizeof(uint32_t));
    message.insert(message.begin(), head.begin(), head.end());

    std::cout<<"~~~~~~~~~~~~"<<std::endl;
    for(auto i: message)
    {
        //std::cout<<count++<<std::endl;
        std::cout<<std::hex<<static_cast<int>(i)<<std::endl;
    }
}