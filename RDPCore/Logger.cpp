#include "Logger.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/rotating_file_sink.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

#define SPDLOG_ACTIVE_LEVEL  SPDLOG_LEVEL_TRACE
#define SPDLOG_NAME          "RDPBoost"

static std::shared_ptr<spdlog::logger> LoggerInstance = nullptr;

void InitLogger()
{
    LoggerInstance = spdlog::stdout_color_mt("console");

    //LoggerInstance = spdlog::rotating_logger_mt(SPDLOG_NAME, "logs/rotating.txt", 1048576 * 5, 3);

    LoggerInstance->set_pattern("[%L] [%Y-%m-%d %H:%M:%S.%e] [%s:%#] %v");    
}

std::shared_ptr<spdlog::logger> LoggerI()
{
    return LoggerInstance;
}