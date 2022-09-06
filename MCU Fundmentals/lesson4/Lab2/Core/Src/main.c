
#include "Platform_Types.h"

//CLock registers
#define RCC_BASE 	    0x40021000
#define RCC_APB2ENR 	*(vuint32 *)(RCC_BASE + 0x18)
#define RCC_CFGR     	*(vuint32 *)(RCC_BASE + 0x04)

//GPIO registers
#define PORTA_BASE 	  	0x40010800
#define GPIOA_CRH 		*(vuint32 *)(PORTA_BASE + 0x04)
#define GPIOA_ODR 		*(vuint32 *)(PORTA_BASE + 0x0C)
#define GPIOA_CRL		*(vuint32 *)(PORTA_BASE + 0x00)


//EXTI registers
#define EXTI_BASE		0x40010400
#define EXTI_IMR 		*(vuint32 *)(EXTI_BASE + 0x00)
#define EXTI_RTSR		*(vuint32 *)(EXTI_BASE + 0x08)
#define EXTI_PR			*(vuint32 *)(EXTI_BASE + 0x14)

//AFIO registers
#define AFIO_BASE		0x40010000
#define AFIO_EXTICR1	*(vuint32 *)(AFIO_BASE + 0x08)

//NVIC registers
#define NVIC_EXTIE0		*(vuint32 *)(0xE000E100)

void Clk_init(){
	//Enable Clock for used peripherals
	RCC_APB2ENR |= (1<<2);
	RCC_APB2ENR |= (1<<0);
}

void GPIO_init(){
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;
	GPIOA_CRL |= (1<<2);
}

void main(void){

	Clk_init();
	GPIO_init();
	EXTI_IMR |= (1<<0);

	EXTI_RTSR |= (1<<0);

	AFIO_EXTICR1 &= ~(0x11);

	NVIC_EXTIE0 |= (1<<6);
	while(1);

}

void EXTI0_IRQHandler(){

	GPIOA_ODR ^= (1<<13);
	//clear pending register by write 1
	EXTI_PR	|= (1<<0);
}
