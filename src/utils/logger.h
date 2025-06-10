#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
public:
    enum class LogLevel {
        INFO,
        WARNING,
        ERROR
    };

    Logger(const std::string& filename);
    ~Logger();

    void log(const std::string& message, LogLevel level = LogLevel::INFO);

private:
    std::ofstream logFile;

    std::string getCurrentTime();
    std::string logLevelToString(LogLevel level);
};

#endif // LOGGER_H