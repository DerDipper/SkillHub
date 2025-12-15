#include "StateMachine.h"

extern int32_t Statemachine_initialize(StateMachine * const pInstance, StateMachine_Config const * const pConfig)
{
    pInstance->config = pConfig;
    pInstance->state = pConfig->initialState;
    return 0;
}

extern int32_t StateMachine_reset(StateMachine * const pInstance)
{
    pInstance->state = pInstance->config->initialState;
    return 0;
}

extern int32_t Statemachine_signal(StateMachine * const pInstance, Event const event)
{
    int32_t index = 0;
    State toGoTo = pInstance->state;

    for(index = 0; index < pInstance->config->transitionCount; index++)
    {
        Transition const * currentTransition = &pInstance->config->transitions[index];
        if(currentTransition->from == pInstance->state)
        {
            if(currentTransition->trigger == event)
            {
                toGoTo = currentTransition->to;
            }
        }
    }

    pInstance->state = toGoTo;

    return 0;
}

extern int32_t StateMachint_getState(StateMachine const * const pInstance)
{
    return pInstance->state;
}