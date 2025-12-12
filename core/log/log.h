#pragma once

class Log
{
    private:
        int m_LogLevel = Log_Trace;
    public:

        enum logLevels
        {
            Log_CritError = 0,
            Log_Error = 1,
            Log_Warn = 2,
            Log_Info = 3,
            Log_Debug = 4,
            Log_Trace = 5,
        };

        void SetLevel(int level);

        void Trace(const char* traceMessage);
        void Debug(const char* debugMessage);
        void Info(const char* infoMessage);
        void Warn(const char* warnMessage);
        void Error(const char* errorMessage);
        void CriticalError(const char* critErrorMessage);
};