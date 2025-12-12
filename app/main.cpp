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
    
    MsgBox errorBox;
    errorBox.m_Title = "Error";
    errorBox.m_Description = "This is an error!";
    errorBox.m_MessageBoxType = EZ_MSGBOX_TYPE::EZ_ERROR;

    errorBox.displayMessage();

    std::cin.get();

    return 0;
}