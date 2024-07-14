#ifndef LOGGER_H
#define LOGGER_H

#include "spdlog/spdlog.h"
#include <memory>

void InitLogger();

std::shared_ptr<spdlog::logger> LoggerI();

#endif
