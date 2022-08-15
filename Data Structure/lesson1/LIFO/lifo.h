/*
 * lifo.h
 *
 *  Created on: Aug 13, 2022
 *      Author: Amr Salhen
 */

#ifndef LIFO_H_
#define LIFO_H_

#include <stdlib.h>
#include <stdio.h>
// type definition
typedef struct {
	unsigned int length;
	unsigned int counter;
	unsigned int* base;
	unsigned int* head;

}LIFO_BUF_t;

typedef enum{

	LIFO_NO_ERROR,
	LIFO_FULL,
	LIFO_EMPTY,
	LIFO_NULL

}LIFO_status;

//APIS

LIFO_status init_LIFO(LIFO_BUF_t* LIFO,unsigned int* buf ,unsigned int length);
LIFO_status get_item(LIFO_BUF_t* LIFO,unsigned int* item);
LIFO_status add_item(LIFO_BUF_t* LIFO,unsigned int item);

#endif /* LIFO_H_ */
