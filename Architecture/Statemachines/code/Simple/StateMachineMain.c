#include <stdio.h>
#include "StateMachine.h"
#include "ButtonStateMachine.h"

StateMachine machine;
StateMachine_Config config;

void TestEvaluateEvent(Button_Event event)
{
    int state = 0;
    StateMachine_evaluate(&machine, event);
    state = StateMachint_getState(&machine);
    printf("%20s -> %20s\n", Button_Event_getString(event), Button_State_getString(state));
}

int main(void)
{

    StateMachine_init(&machine, &config);

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
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);
    TestEvaluateEvent(BUTTON_EVENT_HIGH);

    return 0;
}

