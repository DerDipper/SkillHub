#include "SimpleStateMachine.h"

static bool SimpleStatemachine_create_verifyParameters(SimpleStatemachine* pObject, const SimpleStateMachine_Config* pConfig);
static bool SimpleStatemachine_create_internal(SimpleStatemachine* pObject, const SimpleStateMachine_Config* pConfig);

static bool SimpleStatemachine_signalAndDispatch_verifyParameters(SimpleStatemachine* pObject, const Event event);
static bool SimpleStatemachine_signalAndDispatch_internal(SimpleStatemachine* pObject, const Event event);

static bool SimpleStatemachine_getState_verifyParameters(SimpleStatemachine* pObject);


bool SimpleStatemachine_create(SimpleStatemachine* pObject, const SimpleStateMachine_Config* pConfig)
{
    bool result = false;

    result = SimpleStatemachine_create_verifyParameters(pObject, pConfig);

    if(true == result)
    {
        result = SimpleStatemachine_create_internal(pObject, pConfig);
    }

    return result;
}

bool SimpleStatemachine_signal(SimpleStatemachine* pObject, const Event event)
{
    bool result = false;

    pObject->lastEvent = event;

    return result;
}

bool SimpleStatemachine_dispatch(SimpleStatemachine* pObject)
{
    return SimpleStatemachine_signalAndDispatch(pObject, pObject->lastEvent);
}

bool SimpleStatemachine_signalAndDispatch(SimpleStatemachine* pObject, const Event event)
{
    bool result = false;

    result = SimpleStatemachine_signalAndDispatch_verifyParameters(pObject, event);

    if(true == result)
    {
        result = SimpleStatemachine_signalAndDispatch_internal(pObject, event);
    }

    return result;
}

State SimpleStatemachine_getState(SimpleStatemachine* pObject)
{
    State result = INVALID_STATE;

    result = SimpleStatemachine_getState_verifyParameters(pObject);

    if(true == result)
    {
        result = pObject->state;
    }

    return result;
}

static bool SimpleStatemachine_create_verifyParameters(SimpleStatemachine* pObject, const SimpleStateMachine_Config* pConfig)
{
    bool result = true;
    if(NULL == pObject)
    {
        result = false;
    }

    if(NULL == pConfig)
    {
        result = false;
    }

    if(NULL == pConfig->pTransitionTable)
    {
        result = false;
    }

    if(0 == pConfig->transitionTableSize)
    {
        result = false;
    }    
    return result;
}

static bool SimpleStatemachine_create_internal(SimpleStatemachine* pObject, const SimpleStateMachine_Config* pConfig)
{
    bool result = true;

    pObject->lastEvent = INVALID_EVENT;
    pObject->config = pConfig;
    pObject->state = pConfig->initalState;

    return result;
}

static bool SimpleStatemachine_signalAndDispatch_verifyParameters(SimpleStatemachine* pObject, const Event event)
{
    bool result = true;

    if(NULL == pObject)
    {
        result = false;
    }

    return result;    
}

static bool SimpleStatemachine_signalAndDispatch_internal(SimpleStatemachine* pObject, const Event event)
{
    bool result = false;
    SimpleStateMachine_TransitionTable_Entry* pEntry = NULL;
    State nextState = pObject->state;

    pObject->lastEvent = event;

    for(int index = 0; index < pObject->config->transitionTableSize; index++)
    {
        pEntry = &pObject->config->pTransitionTable[index];

        if(event == pObject->lastEvent && pObject->state == pEntry->from)
        {
            nextState = pEntry->to;
            result = true;
        }
    }

    pObject->state = nextState;

    return result;
}

static bool SimpleStatemachine_getState_verifyParameters(SimpleStatemachine* pObject)
{
    bool result = true;

    if(NULL == pObject)
    {
        result = false;
    }

    return result;    
}


