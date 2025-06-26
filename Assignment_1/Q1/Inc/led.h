/*
 * led.h
 *
 *  Created on: Mar 21, 2025
 *      Author: sunbeam
 */

#ifndef LED_H_
#define LED_H_

#include<stm32f407xx.h>

#define BV(n)	(1<<(n))

#define LED_GPIO	GPIOD

#define GPIOD_CLK_EN	3

#define LED_GREEN	12
#define LED_ORANGE	13
#define LED_RED		14
#define LED_BLUE	15

void led_init(uint8_t pin);
void led_on(uint8_t pin);
void led_off(uint8_t pin);
void led_toggle(uint8_t pin);


#endif /* LED_H_ */







