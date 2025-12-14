#pragma once

#include "StateMachine.h"

/** Button Events */
typedef enum Button_Event
{
    BUTTON_EVENT_LOW, /**< Input event low */
    BUTTON_EVENT_HIGH, /**< Input event high */
}Button_Event;

/** Button States */
typedef enum Button_State
{
    BUTTON_STATE_ACTIVE,    /**< Button is in active state */
    BUTTON_STATE_INACTIVE,  /**< Button is in inactive state */
    BUTTON_STATE_PRESSED,   /**< Button is in pressed state */
    BUTTON_STATE_RELEASED,  /**< Button is in released state */
}Button_State;

/**
 * @brief Get the Enum Name from a enum Value
 * 
 * @param event Event to parse
 * @return const char* name of the enum
 */
extern const char* Button_Event_getString(Button_Event const event);

/**
 * @brief Get the Enum Name from a enum Value
 * 
 * @param state State to parse
 * @return const char* name of the enum
 */
extern const char* Button_State_getString(Button_State const state);

