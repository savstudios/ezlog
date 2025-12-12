#pragma once

#include "windows.h"
#include "enum.h"

class MsgBox
{
    public:
        const char* m_Title;
        const char* m_Description;
        EZ_MSGBOX_TYPE m_MessageBoxType;

        int displayMessage();
        
};