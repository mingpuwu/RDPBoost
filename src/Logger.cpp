#include "Logger.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/rotating_file_sink.h"
#include <memory>

static std::shared_ptr<spdlog::logger> LoggerInstance = nullptr;

void InitLogger()
{
    LoggerInstance = spdlog::rotating_logger_mt("some_logger_name", "logs/rotating.txt", 1048576 * 5, 3);
}

std::shared_ptr<spdlog::logger> LoggerI()
{
    return LoggerInstance;
}