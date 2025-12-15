#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <errno.h>

typedef int32_t Event;
typedef int32_t State;

typedef struct Transition
{
    State from;
    State to;
    Event trigger;
}Transition;

typedef struct StateMachine_Config
{
    State initialState;
    size_t transitionCount;
    Transition const * transitions;
}StateMachine_Config;

typedef struct StateMachine
{
    State state;
    StateMachine_Config const * config;
}StateMachine;

/**
 * @brief Initializes the Statemachine
 * 
 * @param pInstance pointer to Statemachine Instance that is being initialized
 * @param pConfig pointer to configuration of statemachine
 * @return int32_t result of operation
 */
extern int32_t Statemachine_initialize(StateMachine * const pInstance, StateMachine_Config const * const pConfig);

/**
 * @brief Resets a given Statemachine to initial state
 * 
 * @param pInstance pointer to Statemachine Instance that is being initialized
 * @return int32_t result of operation
 */
extern int32_t StateMachine_reset(StateMachine * const pInstance);

/**
 * @brief Executes Transition Evaluation
 * 
 * @param pInstance pointer to statemachine instance
 * @param event Event to be evaluated
 * @return int32_t result of operation
 */
extern int32_t Statemachine_signal(StateMachine * const pInstance, Event const event);

/**
 * @brief Returns the State of the Statemachine
 * 
 * @param pInstance pointer to statemachine instance
 * @return int32_t state of the statemachine
 */
extern int32_t StateMachint_getState(StateMachine const * const pInstance);


