/*
 * main.c
 *
 *  Created on: Sep 6, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>
#include <util/delay.h>
#include <avr/interrupt.h>

//GPIO registers
#define DDRD  *((volatile char*)0x31)
#define PORTD *((volatile char*)0x32)
//interrupt registers
#define MCUCR *((volatile char*)0x55)
#define GICR  *((volatile char*)0x5B)
//#define DDRD  *((volatile char*)0x31)

void GPIO_init(){
	//configure PortD Pin7 as Output
	DDRD |=(1<<6);

}

void EXTI_init(){
	//Enable INT0
//	ISC01 ISC00 Description
//	0 0 The low level of INT0 generates an interrupt request.
//	0 1 Any logical change on INT0 generates an interrupt request.
//	1 0 The falling edge of INT0 generates an interrupt request.
//	1 1 The rising edge of INT0 generates an interrupt request.
	MCUCR |=(1<<0);
	//Enable General Interrupt Control
	GICR|=(1<<6);
}
void main(){
	GPIO_init();
	EXTI_init();
	sei();
	while(1){
		PORTD=PORTD&(!(1<<6));
	}

}
ISR(INT0_vect){
	PORTD|=(1<<6);
	_delay_ms(1000);
}
