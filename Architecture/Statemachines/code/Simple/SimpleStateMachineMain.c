#include <stdio.h>

#include "SimpleStateMachine.h"
#include "ButtonStateMachine.h"

int main(void)
{
    SimpleStatemachine statemachine;
    uint32_t a = 0;

    SimpleStatemachine_create(&statemachine, &ButtonStateMachine_Config);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_LOW);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_LOW);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_LOW);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_LOW);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_LOW);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_LOW);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_LOW);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    SimpleStatemachine_signalAndDispatch(&statemachine, BUTTON_HIGH);
    a = SimpleStatemachine_getState(&statemachine);
    printf("State  %u\n", a);

    return 0;
}

