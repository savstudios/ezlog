class Log
{
    private:
        int m_LogLevel = Log_Trace;
    public:

        const int Log_CritError = 0;
        const int Log_Error = 1;
        const int Log_Warn = 2;
        const int Log_Info = 3;
        const int Log_Debug = 4;
        const int Log_Trace = 5;

        void SetLevel(int level);

        void Trace(const char* traceMessage);
        void Debug(const char* debugMessage);
        void Info(const char* infoMessage);
        void Warn(const char* warnMessage);
        void Error(const char* errorMessage);
        void CriticalError(const char* critErrorMessage);
};