
#include "UART.h"

#define UART0DR  *((volatile unsigned int* const)((unsigned int *)0x101f1000))

void Uart_Send_string(unsigned char *P_tx_srting){
	while(*P_tx_srting !='\0'){
		UART0DR=(unsigned int)(*P_tx_srting);
		P_tx_srting++;
	}
}