#ifndef LOGGER_H
#define LOGGER_H

#include "spdlog/spdlog.h"

void InitLogger();

std::shared_ptr<spdlog::logger> LoggerI();

#endif