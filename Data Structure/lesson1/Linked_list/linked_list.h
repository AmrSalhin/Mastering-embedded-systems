/*
 * linked_list.h
 *
 *  Created on: Aug 15, 2022
 *      Author: Amr Salhen
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <conio.h>

#define Dprint(...)  { fflush(stdout); \
					fflush(stdin); \
					printf(__VA_ARGS__); \
					fflush(stdout); \
					fflush(stdin);}

struct Sdata {
	int id;
	char name[40];
	float height;
};


struct Ssdata {
	struct Sdata data;
	struct Ssdata* next;
};



//APIS

void fill_the_record(struct Ssdata* newStudent);
void Add_student();
int Delete_student();
void View_students();
void Delete_all();
int length();
int middle();
void Reverse();





#endif /* LINKED_LIST_H_ */
