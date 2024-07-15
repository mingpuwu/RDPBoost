#include "Logger.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/rotating_file_sink.h"
#include <memory>

#define SPDLOG_ACTIVE_LEVEL  SPDLOG_LEVEL_TRACE
#define SPDLOG_NAME          "RDPBoost"

static std::shared_ptr<spdlog::logger> LoggerInstance = nullptr;

void InitLogger()
{
    LoggerInstance = spdlog::rotating_logger_mt(SPDLOG_NAME, "logs/rotating.txt", 1048576 * 5, 3);

    LoggerInstance->set_pattern("[%Y-%m-%d %H:%M:%S.%e][thread %t][%@,%!][%l] : %v");
}

std::shared_ptr<spdlog::logger> LoggerI()
{
    return LoggerInstance;
}