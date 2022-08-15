/*
 * linked_list.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Amr Salhen
 */

#include "linked_list.h"

struct Ssdata* gpFirstStudent=NULL;

void fill_the_record(struct Ssdata* newStudent){
	char temp[40];

	Dprint("\n Enter the ID : ");
	gets(temp);
	newStudent->data.id=atoi(temp);

	Dprint("\n Enter Student Full Name : ");
	gets(newStudent->data.name);

	Dprint("\n Enter Student height : ");
	gets(temp);
	newStudent->data.height=atof(temp);

}

void Add_student(){

	struct Ssdata* pNewStudent;
	struct Ssdata* pLastStudent;

	//check if the list is empty
	if(gpFirstStudent==NULL){
		//Create the first record
		pNewStudent =(struct Ssdata*)malloc(sizeof(struct Ssdata));
		gpFirstStudent=pNewStudent;

	}else{
		pLastStudent=gpFirstStudent;
		//Navigate until reach the last record
		while(pLastStudent->next){
			pLastStudent=pLastStudent->next;
		}
		pNewStudent=(struct Ssdata*)malloc(sizeof(struct Ssdata));
		pLastStudent->next=pNewStudent;

	}

	fill_the_record(pNewStudent);
	pNewStudent->next=NULL;
}

int Delete_student(){
	char temp[40];
	int selectedId;

	Dprint("\n Enter Student ID to be deleted : ");
	gets(temp);
	selectedId=atoi(temp);

	if(gpFirstStudent){
		struct Ssdata* pSelectedStudent=gpFirstStudent;
		struct Ssdata* pPreviouseStudent=NULL;
		while(pSelectedStudent){
			if(pSelectedStudent->data.id==selectedId){
				//check if the ID to be deleted is the First student or no
				if(pPreviouseStudent){

					pPreviouseStudent=pSelectedStudent->next;
				}
				else{

					gpFirstStudent=pSelectedStudent->next;
				}
				//delete The Student
				free(pSelectedStudent);
				return 1;
			}
			pPreviouseStudent=pSelectedStudent;
			pSelectedStudent=pSelectedStudent->next;
		}

	}
	Dprint("\n Cannot Find The Student ID");
	return 0;
}
void View_students(){
	int count = 0;
	struct Ssdata* pCurrentStudent=gpFirstStudent;
	if(gpFirstStudent==NULL)
		Dprint("\n Empty List");

	while(pCurrentStudent){
		Dprint("\n Record Number %d",count+1);
		Dprint("\n Student ID : %d",pCurrentStudent->data.id);
		Dprint("\n Student Name : %s",pCurrentStudent->data.name);
		Dprint("\n Student Height %f",pCurrentStudent->data.height);
		Dprint("\n================================");
		pCurrentStudent=pCurrentStudent->next;
		count++;}

}

void Delete_all(){
	struct Ssdata* pCurrentStudent=gpFirstStudent;
	struct Ssdata* pTemp=NULL;
	if(gpFirstStudent==NULL)
		Dprint("\n Empty List");

	while(pCurrentStudent){
		pTemp=pCurrentStudent;
		pCurrentStudent=pCurrentStudent->next;
		free(pTemp);
	}
	gpFirstStudent=NULL;


}

int length(){
	int count=0;
	struct Ssdata* pCurrentStudent;
	if(gpFirstStudent==NULL){
		Dprint("\n Empty List");
		return 0;
	}
	pCurrentStudent=gpFirstStudent;
	while(pCurrentStudent){
		count++;
		pCurrentStudent=pCurrentStudent->next;
	}
	Dprint("\n The Number Of Student: %d ",count);
	return 1;
}

int middle(){
	int count=0;
	struct Ssdata* pCurrentStudent;
	if(gpFirstStudent==NULL){
		Dprint("\n Empty List");
		return 0;
	}
	pCurrentStudent=gpFirstStudent;
	while(pCurrentStudent){
		count++;
		pCurrentStudent=pCurrentStudent->next;
	}
	pCurrentStudent=gpFirstStudent;

	for(int i=0;i<count/2;i++){
		pCurrentStudent=pCurrentStudent->next;
	}
	if((count%2)==0){
		Dprint("\n middle of list: %d",(count+2)/2);
	}else{
		Dprint("\n middle of list: %d",(count+1)/2);
	}

	Dprint("\n Student Id: %d",pCurrentStudent->data.id);
	Dprint("\n Student name: %s",pCurrentStudent->data.name);
	Dprint("\n Student Id: %f",pCurrentStudent->data.height);
	return 1;
}

void Reverse(){
	struct Ssdata* pCurrentStudent;
	struct Ssdata* pPreviouseStudent=NULL;
	struct Ssdata* pNextStudent;
	if(gpFirstStudent==NULL){
		Dprint("\n Empty List");
	}else{
		pCurrentStudent=gpFirstStudent;
		pNextStudent=gpFirstStudent;
		while(pCurrentStudent){
			pNextStudent=pCurrentStudent->next;
			pCurrentStudent->next=pPreviouseStudent;
			pPreviouseStudent=pCurrentStudent;
			pCurrentStudent=pNextStudent;
		}
		gpFirstStudent=pPreviouseStudent;
		Dprint("\nList Reversed");
	}


}


