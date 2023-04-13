/******************************************************************************
 *
 * Module: buzzer
 * File Name: buzzer.c
 * Created on: Oct 29, 2021
 * Author: Eslam Mtra
 *
 *******************************************************************************/


#include "buzzer.h"
#include "gpio.h"

void BZR_init(void){
	GPIO_setupPinDirection(BUZZER_PORT, BUZZER_PIN, PIN_OUTPUT);
	BZR_OFF();
}

void BZR_ON(void){
	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, LOGIC_HIGH);
}

void BZR_OFF(void){
	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, LOGIC_LOW);
}
