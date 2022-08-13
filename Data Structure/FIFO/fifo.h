/*
 * fifo.h
 *
 *  Created on: Aug 13, 2022
 *      Author: Amr Salhen
 */

#ifndef FIFO_H_
#define FIFO_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//user configuration
#define data_type  uint32_t
#define width      5

//type definition
typedef struct{
	unsigned int length;
	unsigned int count;
	data_type* head;
	data_type* base;
	data_type* tail;
}FIFO_BUF_t;

typedef enum{
	FIFO_NO_ERROR,
	FIFO_FULL,
	FIFO_EMPTY,
	FIFO_NULL
}FIFO_Status;

//APIS
FIFO_Status init_FIFO(FIFO_BUF_t* fifo,data_type* buf);
FIFO_Status FIFO_enqueue(FIFO_BUF_t* fifo,data_type item);
FIFO_Status FIFO_dequeue(FIFO_BUF_t* fifo,data_type* item);
void FIFO_print(FIFO_BUF_t* fifo);


#endif /* FIFO_H_ */
