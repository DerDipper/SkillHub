#include "ButtonStateMachine.h"

extern const char* Button_Event_getString(Button_Event const event)
{
    const char* text = "BUTTON_EVENT Error";

    switch(event)
    {
        case BUTTON_EVENT_LOW:
            text = "BUTTON_EVENT_LOW";
            break;

        case BUTTON_EVENT_HIGH:
            text = "BUTTON_EVENT_HIGH";
            break;
    }

    return text;
}

extern const char* Button_State_getString(Button_State const state)
{
    const char* text = "BUTTON_STATE Error";

    switch(state)
    {
        case BUTTON_STATE_ACTIVE:
            text = "BUTTON_STATE_ACTIVE";
            break;

        case BUTTON_STATE_INACTIVE:
            text = "BUTTON_STATE_INACTIVE";
            break;
        case BUTTON_STATE_PRESSED:
            text = "BUTTON_STATE_PRESSED";
            break;

        case BUTTON_STATE_RELEASED:
            text = "BUTTON_STATE_RELEASED";
            break;
    }

    return text;
}