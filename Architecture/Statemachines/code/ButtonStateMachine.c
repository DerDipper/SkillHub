#include "ButtonStateMachine.h"
#include "EnumTools.h"


extern const char* Button_Event_getString(Button_Event const event)
{
    const char* text = "BUTTON_EVENT Error";

    switch(event)
    {
        EnumTools_CreateEnumStringCase(BUTTON_EVENT_LOW);
        EnumTools_CreateEnumStringCase(BUTTON_EVENT_HIGH);
    }

    return text;
}

extern const char* Button_State_getString(Button_State const state)
{
    const char* text = "BUTTON_STATE Error";

    switch(state)
    {
        EnumTools_CreateEnumStringCase(BUTTON_STATE_ACTIVE);
        EnumTools_CreateEnumStringCase(BUTTON_STATE_INACTIVE);
        EnumTools_CreateEnumStringCase(BUTTON_STATE_PRESSED);
        EnumTools_CreateEnumStringCase(BUTTON_STATE_RELEASED);
    }

    return text;
}