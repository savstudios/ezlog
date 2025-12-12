#include "messageBox.h"

int MsgBox::displayMessage()
{
    #ifdef _WIN32
        int msgBox = MessageBoxA(
            NULL,
            m_Description,
            m_Title,
            m_MessageBoxType | MB_OK
        );

        return msgBox;
    #endif

    return 0;
}