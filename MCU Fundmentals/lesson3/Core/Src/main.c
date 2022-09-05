
#include "Platform_Types.h"

#define RCC_BASE 	    0x40021000
#define PORTA_BASE 	  	0x40010800
#define RCC_APB2ENR 	*(vuint32 *)(RCC_BASE + 0x18)
#define GPIOA_CRH 		*(vuint32 *)(PORTA_BASE + 0x04)
#define GPIOA_ODR 		*(vuint32 *)(PORTA_BASE + 0x0C)
#define RCC_CFGR     	*(vuint32 *)(RCC_BASE + 0x04)


void main(void){
//	PPRE1: APB low-speed prescaler (APB1)
//	Set and cleared by software to control the division factor of the APB low-speed clock
//	(PCLK1).
//	0xx: HCLK not divided
//	100: HCLK divided by 2
//	101: HCLK divided by 4
//	110: HCLK divided by 8
//	111: HCLK divided by 16
	RCC_CFGR|=(0b100<<8);

//	Bits 13:11 PPRE2: APB high-speed prescaler (APB2)
//	Set and cleared by software to control the division factor of the APB high-speed clock
//	(PCLK2).
//	0xx: HCLK not divided
//	100: HCLK divided by 2
//	101: HCLK divided by 4
//	110: HCLK divided by 8
//	111: HCLK divided by 16
	RCC_CFGR|=(0b101<<11);

	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;

	while(1){
		GPIOA_ODR |= 1<<13;
		for(int i=0;i<5000;i++);
		GPIOA_ODR &=~(1<<13);
		for(int i=0;i<5000;i++);
	}


}
