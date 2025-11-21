#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#include "ButtonStateMachine.h"

SimpleStateMachine_TransitionTable_Entry buttonStateMachineTransitionTable[] = 
    {
        {.event = BUTTON_LOW, .from = BUTTON_STATE_INACTIVE, .to = BUTTON_STATE_PRESSED},
        {.event = BUTTON_HIGH, .from = BUTTON_STATE_INACTIVE, .to = BUTTON_STATE_INACTIVE},
        {.event = BUTTON_LOW, .from = BUTTON_STATE_PRESSED, .to = BUTTON_STATE_ACTIVE},
        {.event = BUTTON_HIGH, .from = BUTTON_STATE_PRESSED, .to = BUTTON_STATE_INACTIVE},
        {.event = BUTTON_LOW, .from = BUTTON_STATE_RELEASED, .to = BUTTON_STATE_ACTIVE},
        {.event = BUTTON_HIGH, .from = BUTTON_STATE_RELEASED, .to = BUTTON_STATE_INACTIVE},
        {.event = BUTTON_LOW, .from = BUTTON_STATE_ACTIVE, .to = BUTTON_STATE_ACTIVE},
        {.event = BUTTON_HIGH, .from = BUTTON_STATE_ACTIVE, .to = BUTTON_STATE_RELEASED},
    };


SimpleStateMachine_Config ButtonStateMachine_Config = { 
    .initalState = BUTTON_STATE_INACTIVE, 
    .transitionTableSize = sizeof(buttonStateMachineTransitionTable)/sizeof(buttonStateMachineTransitionTable[0]),
    .pTransitionTable = buttonStateMachineTransitionTable};

