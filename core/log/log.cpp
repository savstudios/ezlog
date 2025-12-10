#include <iostream>

#include "log.h"

void Log::SetLevel(int level)
{
    m_LogLevel = level; 
}

void Log::Trace(const char* traceMessage)
{
    if (m_LogLevel < Log_Trace) {return;}

    std::cout << "\033[90m" << "[TRACE]: " << "\033[0m" << traceMessage << std::endl;
}

void Log::Debug(const char* debugMessage)
{
    if (m_LogLevel < Log_Debug) {return;}

    std::cout << "\033[94m" << "[DEBUG]: " << "\033[0m" << debugMessage << std::endl;
}

void Log::Info(const char* infoMessage)
{
    if (m_LogLevel < Log_Info) {return;}

    std::cout << "[INFO]: " << infoMessage << std::endl;
}

void Log::Warn(const char* warnMessage)
{
    if (m_LogLevel < Log_Warn) {return;}

    std::cout << "\033[93m" << "[WARNING]: " << "\033[0m" << warnMessage << std::endl;
}

void Log::Error(const char* errorMessage)
{
    if (m_LogLevel < Log_Error) {return;}

    std::cout << "\033[91m" << "[ERROR]: " << "\033[0m" << errorMessage << std::endl;
}

void Log::CriticalError(const char* critErrorMessage)
{
    std::cerr << "\033[31m" << "[CRITICAL ERROR]: " << "\033[0m" << critErrorMessage << std::endl;
}