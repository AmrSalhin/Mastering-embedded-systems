/*
 * studentData.h
 *
 *  Created on: Aug 23, 2022
 *      Author: Amr Salhen
 */

#ifndef STUDENTDATA_H_
#define STUDENTDATA_H_
#include<stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
//#include "fifo.h"


//MACROS
#define Dprintf(...)  { fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}



//type define
typedef struct {
	char fname[50];
	char lname[50];
	int roll;
	float GPA;
	int cid[5];
}student_info;

typedef enum{
	success,
	roll_num_exist,
	roll_num_dosenot_exist,
	name_exist,
	name_dosenot_exist
}registeration_status;

//APIS
void add_student_file();
void add_student_manually();
void find_roll();
registeration_status find_first_name();
void find_course();
void total_student();
void delete_student();
void update_student();
registeration_status search_for_roll();


#endif /* STUDENTDATA_H_ */
