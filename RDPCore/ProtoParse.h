#include "Logger.h"
#include <vector>
#include <string>
#include <cstdint>

#ifndef PROTOPARSE_H
#define PROTOPARSE_H

class ProtoParse
{
public:
    ProtoParse();

    ~ProtoParse();

    bool ExtractorMesssage(std::string &input, std::vector<std::string> &Messages,std::string &remainbuffer);

private:
    int getOnedata(std::string& input, size_t start_index, std::string &message);

    uint32_t ParseUInt32(const uint8_t* buffer)
    {
      uint32_t number;
      std::copy(buffer, buffer+4, reinterpret_cast<uint8_t*>(&number));
      return number;
    }
};

#endif
