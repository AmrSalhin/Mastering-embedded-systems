/*
 * lifo.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Amr Salhen
 */

#include "lifo.h"

LIFO_status init_LIFO(LIFO_BUF_t* LIFO,unsigned int* buf ,unsigned int length){

	if(buf == NULL){
		printf("========LIFO is NULL========\n");
		return LIFO_NULL;}
	// LIFO initialization
	LIFO->base=buf;
	LIFO->head=buf;
	LIFO->length=length;
	LIFO->counter=0;
	return LIFO_NO_ERROR;
}
LIFO_status get_item(LIFO_BUF_t* LIFO,unsigned int* item){
	// check if the LIFO is valid
	if(!LIFO->base || !LIFO->head){
		printf("========LIFO is invalid========\n");
		return LIFO_NULL;}
	// check if the LIFO is empty
	if(LIFO->counter==0){
		printf("========LIFO is EMPTY========\n");
		return LIFO_EMPTY;}

	(LIFO->head)--;
	*item =*LIFO->head;
	LIFO->counter--;
	return LIFO_NO_ERROR;
}
LIFO_status add_item(LIFO_BUF_t* LIFO,unsigned int item){
	// check if the LIFO is FULL
	if(LIFO->counter==LIFO->length){
		printf("========LIFO is FULL========\n");
		return LIFO_FULL;
	}
	// check if the LIFO is valid
	if(!LIFO->base || !LIFO->head){
		printf("========LIFO is invalid========\n");
		return LIFO_NULL;}

	*LIFO->head=item;
	(LIFO->head)++;
	LIFO->counter++;

	return LIFO_NO_ERROR;

}
