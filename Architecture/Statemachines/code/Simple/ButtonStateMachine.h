#pragma once

#include "StateMachine.h"

typedef enum Button_Event
{
    BUTTON_EVENT_LOW,
    BUTTON_EVENT_HIGH,
}Button_Event;


typedef enum Button_State
{
    BUTTON_STATE_ACTIVE,
    BUTTON_STATE_INACTIVE,
    BUTTON_STATE_PRESSED,
    BUTTON_STATE_RELEASED,
}Button_State;

extern const char* Button_Event_getString(Button_Event const event);

extern const char* Button_State_getString(Button_State const state);
