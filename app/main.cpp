#include <iostream>
#include "EZLog.h"

int main()
{

    Log log;
    log.SetLevel(log.Log_Info);
    log.Trace("Trace");
    log.Debug("Debug");
    log.Info("Info");
    log.Warn("Warn");
    log.Error("Error");
    log.CriticalError("Crash!");
    std::cin.get();

    return 0;
}