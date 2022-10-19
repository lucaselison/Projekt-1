/*
 * usp.h
 *
 * Created: 2022-10-19 08:40:46
 *  Author: lucas
 */ 


#ifndef USP_H_
#define USP_H_

#define F_CPU 16000000UL /* 16 MHz klockfrekvens. */

#include <util/delay.h>
#include <avr/io.h>

//Definerar de olika lamporna och knapparna
#define LED1 6 
#define LED2 7
#define LED3 0
#define BUTTON1 4
#define BUTTON2 5

//Definerar var vilka pins som ligger p� vilka portar.
#define LED1_ON PORTD |= (1 << LED1) /* T�nder lysdiod 1. */
#define LED2_ON PORTD |= (1 << LED2) /* T�nder lysdiod 2. */
#define LED3_ON PORTB |= (1 << LED3) /* T�nder lysdiod 3. */

#define LED1_OFF PORTD &= ~(1 << LED1) /* Sl�cker lysdiod 1. */
#define LED2_OFF PORTD &= ~(1 << LED2) /* Sl�cker lysdiod 2. */
#define LED3_OFF PORTB &= ~(1 << LED3) /* Sl�cker lysdiod 3. */

#define BUTTON1_IS_PRESSED (PINB & (1 << BUTTON1)) //Indikerarar nedtryckning av knapp 1
#define BUTTON2_IS_PRESSED (PINB & (1 << BUTTON2)) //Indikerarar nedtryckning av knapp 2
#define ALLBUTTONS_ARE_PRESSED (BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED) //Indikerar nedtryckning av b�da knapparna

void setup(void);
void delay_ms(const uint16_t delay_time_ms);
void leds_on(void); //Har skapat en funktion f�r leds_on samt leds_off d� vi har pins p� b�de PORTB och PORTD.
void leds_off(void);
void leds_blink_forward(const uint16_t blink_speed_ms);
void leds_blink_backward(const uint16_t blink_speed_ms);

#endif /* USP_H_ */