/*
 * main.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Amr Salhen
 */
#include "fifo.h"

void main(){

	data_type UART_Buffer[width];
	data_type i,temp;
	FIFO_BUF_t UART_FIFO;
	init_FIFO(&UART_FIFO, UART_Buffer);

	for(i=0;i<width;i++){
		if(FIFO_enqueue(&UART_FIFO, i)==FIFO_NO_ERROR){
			printf("Item %d is Enqueued\n",i);
		}
	}
	FIFO_print(&UART_FIFO);
	        if( FIFO_dequeue(&UART_FIFO , &temp)   ==  FIFO_NO_ERROR )
	            printf("\nFIFO dequeue %x ------ done\n",temp);
	        if( FIFO_dequeue(&UART_FIFO , &temp)   ==  FIFO_NO_ERROR )
	            printf("\nFIFO dequeue %x ------ done\n",temp);
	        FIFO_print(&UART_FIFO);

}

