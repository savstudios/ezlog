#include <iostream>
#include "EZLog.h"

int main()
{

    Log log;
    log.Trace("Trace");
    log.Debug("Debug");
    log.Info("Info");
    log.Warn("Warn");
    log.Error("Error");
    log.CriticalError("Crash!");
    std::cin.get();

    return 0;
}