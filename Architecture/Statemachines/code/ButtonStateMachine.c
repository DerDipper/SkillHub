#include "ButtonStateMachine.h"
#include "EnumTools.h"

static const Transition buttonStateMachineTransitions[] = {
    {.from = BUTTON_STATE_INACTIVE, .to = BUTTON_STATE_PRESSED, .trigger = BUTTON_EVENT_LOW},
    {.from = BUTTON_STATE_PRESSED, .to = BUTTON_STATE_INACTIVE, .trigger = BUTTON_EVENT_HIGH},
    {.from = BUTTON_STATE_PRESSED, .to = BUTTON_STATE_ACTIVE, .trigger = BUTTON_EVENT_LOW},
    {.from = BUTTON_STATE_ACTIVE, .to = BUTTON_STATE_RELEASED, .trigger = BUTTON_EVENT_HIGH},
    {.from = BUTTON_STATE_RELEASED, .to = BUTTON_STATE_ACTIVE, .trigger = BUTTON_EVENT_LOW},
    {.from = BUTTON_STATE_RELEASED, .to = BUTTON_STATE_INACTIVE, .trigger = BUTTON_EVENT_HIGH},
};

const StateMachine_Config buttonStateMachine_Config = 
{
    .initialState = BUTTON_STATE_INACTIVE,
    .transitions = buttonStateMachineTransitions,
    .transitionCount = sizeof(buttonStateMachineTransitions)/sizeof(buttonStateMachineTransitions[0]),
};

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