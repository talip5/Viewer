/*
 * led.c
 *
 *  Created on: Mar 30, 2023
 *      Author: ataha
 */
//#include "stm32f0xx_hal.h"
#include "stm32f4xx_hal.h"

void led_ON (void){
	GPIOD->ODR |=(1<<12);
}

void led_OFF (void){
	GPIOD->ODR &=~(1<<12);
}
