/*
 * main.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Amr Salhen
 */

#include "lifo.h"

void main(){

	unsigned int buffer1 [5];

	int i,temp;
	LIFO_BUF_t UART_Buffer,I2C_Buffer;

	init_LIFO(&UART_Buffer, buffer1, 5);

	unsigned int* buffer2=(unsigned int*) malloc(5*sizeof(unsigned int));

	init_LIFO(&I2C_Buffer, buffer2, 5);

	get_item(&UART_Buffer, &temp);
	add_item(&UART_Buffer, 50);
	for(i=0;i<6;i++){
		if(add_item(&UART_Buffer, i)== LIFO_NO_ERROR){
			printf("THE Added UART Element is : %d \n",i);
		}
	}
	for(i=0;i<5;i++){
			if(get_item(&UART_Buffer, &temp)== LIFO_NO_ERROR){
				printf("THE Returned UART Element is : %d \n",temp);
			}
		}
}
