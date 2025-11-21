#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#define INVALID_STATE 0xFFFFFFFFu
#define INVALID_EVENT 0xFFFFFFFFu


typedef uint32_t State;
typedef uint32_t Event;

typedef struct SimpleStateMachine_TransitionTable_Entry
{
    Event event;
    State from;
    State to;
}SimpleStateMachine_TransitionTable_Entry;

typedef struct SimpleStateMachine_Config
{
    State initalState;
    SimpleStateMachine_TransitionTable_Entry* pTransitionTable;
    size_t transitionTableSize;
}SimpleStateMachine_Config;

typedef struct SimpleStatemachine
{
    State state;
    Event lastEvent;
    const SimpleStateMachine_Config* config;
}SimpleStatemachine;

bool SimpleStatemachine_create(SimpleStatemachine* pObject, const SimpleStateMachine_Config* pConfig);

bool SimpleStatemachine_signal(SimpleStatemachine* pObject, const Event event);

bool SimpleStatemachine_dispatch(SimpleStatemachine* pObject);

bool SimpleStatemachine_signalAndDispatch(SimpleStatemachine* pObject, const Event event);

Event SimpleStatemachine_getState(SimpleStatemachine* pObject);

