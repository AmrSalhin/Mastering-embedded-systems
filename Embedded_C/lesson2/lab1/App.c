#include "UART.h"
unsigned char string_buffer[100]="learn-in-depth:<Amr>";
void main(void){
	Uart_Send_string(string_buffer);
}