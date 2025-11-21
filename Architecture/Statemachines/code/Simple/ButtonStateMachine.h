#pragma once

#include "SimpleStateMachine.h"

typedef enum 
{
    BUTTON_STATE_INACTIVE,
    BUTTON_STATE_PRESSED,
    BUTTON_STATE_RELEASED,
    BUTTON_STATE_ACTIVE,
}ButtonStates;

typedef enum 
{
    BUTTON_HIGH,
    BUTTON_LOW,
}ButtonEvents;

extern SimpleStateMachine_Config ButtonStateMachine_Config;