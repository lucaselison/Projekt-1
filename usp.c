/*
 * usp.h
 *
 * Created: 2022-10-19 08:59:39
 *  Author: lucas
 */ 

#include "header.h"

void setup(void)
{
	DDRD = ((1 << LED1) | (1 << LED2));
	DDRB = (1 << LED3);
	PORTB = ((1 << BUTTON1) | (1 << BUTTON2));
	return;
}

void leds_on(void) //Tänder lysdioderna
{
	PORTD |= ((1 << LED1) | (1 << LED2));
	PORTB |= ((1 << LED3));
	return;
}

void leds_off(void) //Släcker lysdioderna
{
	PORTD &= ~((1 << LED1) | (1 << LED2));
	PORTB &= ~((1 << LED3));
	return;
}

void delay_ms(const uint16_t delay_time_ms)
{
	for (uint16_t i = 0; i < delay_time_ms; i++)
	{
		_delay_ms(1);
	}
	
	return;
}

void leds_blink_forward(const uint16_t blink_speed_ms)
{
	LED1_ON;
	LED2_OFF;
	LED3_OFF;
	delay_ms(blink_speed_ms);
	
	LED1_OFF;
	LED2_ON;
	LED3_OFF;
	delay_ms(blink_speed_ms);
	
	LED1_OFF;
	LED2_OFF;
	LED3_ON;
	delay_ms(blink_speed_ms);
	
	return;
}

void leds_blink_backward(const uint16_t blink_speed_ms)
{
	LED1_OFF;
	LED2_OFF;
	LED3_ON;
	delay_ms(blink_speed_ms);
	
	LED1_OFF;
	LED2_ON;
	LED3_OFF;
	delay_ms(blink_speed_ms);
	
	LED1_ON;
	LED2_OFF;
	LED3_OFF;
	delay_ms(blink_speed_ms);

	return;
}
