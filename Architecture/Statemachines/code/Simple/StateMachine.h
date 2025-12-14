#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <errno.h>

typedef int32_t Event;
typedef int32_t State;

typedef struct StateMachine
{

}StateMachine;

typedef struct StateMachine_Config
{

}StateMachine_Config;

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


