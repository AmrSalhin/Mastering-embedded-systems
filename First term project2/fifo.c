/*
 * fifo.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Amr Salhen
 */

#include "fifo.h"

FIFO_Status init_FIFO(FIFO_BUF_t* fifo,data_type* buf){
	//FIFO initialization
	fifo->length=width;
	fifo->base=buf;
	fifo->head=buf;
	fifo->tail=buf;
	fifo->count=0;
	//check if FIFO is NULL
	if(!fifo->head || !fifo->base || !fifo->tail){
		Dprintf("========invalid FIFO=======");
		return FIFO_NULL;
	}
	return FIFO_NO_ERROR;

}
FIFO_Status FIFO_enqueue(FIFO_BUF_t* fifo,data_type item){

	if(!fifo->head || !fifo->base || !fifo->tail){
		//		printf("========invalid FIFO=======");
		return FIFO_NULL;
	}
	if(fifo->length==fifo->count){
		//		printf("========FIFO is FULL=======");
		return FIFO_FULL;
	}
	*fifo->head=item;
	fifo->count++;
	if(fifo->head==(fifo->base+(fifo->length*sizeof(data_type)))){
		fifo->head=fifo->base;
	}else{
		(fifo->head)++;
	}
	return FIFO_NO_ERROR;
}
FIFO_Status FIFO_dequeue(FIFO_BUF_t* fifo,data_type* item){

	if(!fifo->head || !fifo->base || !fifo->tail){
		//		printf("========invalid FIFO=======");
		return FIFO_NULL;
	}
	if(fifo->count==0){
		//		printf("========FIFO is EMPTY=======");
		return FIFO_EMPTY;
	}

	*item=*fifo->tail;
	fifo->count--;
	if(fifo->tail  == ((fifo->base)+(fifo->length)* sizeof(data_type))){
		fifo->tail=fifo->base;
	}else{
		fifo->tail++;
	}

	return FIFO_NO_ERROR;
}

void FIFO_print(FIFO_BUF_t* fifo){
	data_type* temp;
	int i;
	if (fifo->count == 0)
		printf("\n====== FIFO is EMPTY ======\n");
	else
	{
		temp = fifo->tail;
		//		printf("\n======= FIFO print ======== \n");
		for ( i = 0; i <fifo->count ; ++i) {
			printf("\t %x \n",*temp);
			if(temp  == ((fifo->base)+(fifo->length)* sizeof(data_type))){
				temp=fifo->base;
			}else{
				temp++;
			}
		}
		printf("========================\n");
	}
}

FIFO_Status FIFO_is_Full(FIFO_BUF_t* fifo){
	if(!fifo->head || !fifo->base || !fifo->tail){
		//			printf("========invalid FIFO=======");
		return FIFO_NULL;
	}

	if(fifo->length==fifo->count){
		//			printf("========FIFO is FULL=======");
		return FIFO_FULL;
	}
	return FIFO_NO_ERROR;
}
