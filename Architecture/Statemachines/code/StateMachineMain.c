#include <stdio.h>
#include "StateMachine.h"
#include "ButtonStateMachine.h"

StateMachine machine;

void TestEvaluateEvent(Button_Event event)
{
    int state = 0;
    Statemachine_signal(&machine, event);
    state = StateMachint_getState(&machine);
    printf("%20s -> %20s\n", Button_Event_getString(event), Button_State_getString(state));
}

int main(void)
{
    printf("----------------------------------------------------------------\n");
    Statemachine_initialize(&machine, &buttonStateMachine_Config);

    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    
    printf("----------------------------------------------------------------\n");
    StateMachine_reset(&machine);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);
    TestEvaluateEvent(BUTTON_EVENT_LOW);

    return 0;
}

