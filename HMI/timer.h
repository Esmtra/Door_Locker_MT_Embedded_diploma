/******************************************************************************
 *
 * Module: timer
 * File Name: timer.h
 * Created on: Oct 28, 2021
 * Author: Eslam Mtra
 *
 *******************************************************************************/

#ifndef TIMER_H_
#define TIMER_H_

#include "std_types.h"  // include standard data types

/********************************************************/
/* Type definitions */
/********************************************************/

typedef enum{
	Timer0, Timer1, Timer2  // enum to define the three timers
}Timer_ID;

typedef enum{
	Normal, CTC  // enum to define the two modes
}Timer_mode;

typedef enum{
	NO_Clock , Prescaler_1, Prescaler_8, Prescaler_64, Prescaler_256, Prescaler_1024,  // enum to define the prescaler values
	External_T1_Falling_Edge, External_T1_Rising_Edge
}Timer_Prescaler;

typedef struct{
	Timer_ID timer_ID;  // timer ID
	Timer_mode mode;  // timer mode
	uint16 initialValue;  // initial value for the timer
	uint16 compareValue;  // compare value for the timer
	Timer_Prescaler prescaler;  // prescaler value for the timer
	void (*callBackPtr)(void);  // function pointer for the timer's callback function
}Timer_configuration;


/********************************************************/
/* Functions prototypes */
/********************************************************/

/*
 * Description: A function that initializes a timer with dynamic configurations.
 *
 * Restrictions: - for Timer1 CTC mode, it's configured to control channel A.
 * 				 - supports normal port operations, disables any timer-related pins.
 */
void Timer_init(const Timer_configuration* timer_config);

/*
 * Description: A function to disable a specific timer
 *  the function disables: the clock, overflow & CTC interrupts
 *  the function clears: initial value, compare value & the call-back function
 */
void Timer_deInit(Timer_ID timer_ID);

#endif /* TIMER_H_ */
