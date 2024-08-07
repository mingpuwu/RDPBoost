#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/rotating_file_sink.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

#ifndef LOGGER_H
#define LOGGER_H

#define SPDLOG_NAME "RDPBoost"

#define LOGGER_DEBUG(...) SPDLOG_LOGGER_DEBUG(LoggerWarp::get_logger(), __VA_ARGS__)
#define LOGGER_LOG(...) SPDLOG_LOGGER_INFO(LoggerWarp::get_logger(), __VA_ARGS__)
#define LOGGER_WARN(...) SPDLOG_LOGGER_WARN(LoggerWarp::get_logger(), __VA_ARGS__)
#define LOGGER_ERROR(...) SPDLOG_LOGGER_ERROR(LoggerWarp::get_logger(), __VA_ARGS__)

class LoggerWarp
{
public:
    static std::shared_ptr<spdlog::logger> get_logger()
    {
        if (!instance_)
        {
            initialize_logger();
        }
        return instance_;
    }

private:
    static void initialize_logger()
    {
        instance_ = spdlog::rotating_logger_mt(SPDLOG_NAME, "logs/RDPBoost.log", 1024 * 10, 3);

        instance_->set_level(spdlog::level::info);

        instance_->set_pattern("[%L] [%Y-%m-%d %H:%M:%S.%e] [%t] [%s:%#:%!] %v");
    }

    static inline std::shared_ptr<spdlog::logger> instance_;
};

#endif
