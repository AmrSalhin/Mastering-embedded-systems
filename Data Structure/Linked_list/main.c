/*
 * main.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Amr Salhen
 */

#include "linked_list.h"

void main(){

	char temp[40];
	while(1){
		Dprint("\n==========================");
		Dprint("\n\t Choose one of the following options \n");
		Dprint("\n1: Add Student  ");
		Dprint("\n2: Delete Student  ");
		Dprint("\n3: View Students  ");
		Dprint("\n4: Delete All  ");
		Dprint("\n5: Number of students  ");
		Dprint("\n6: middle student students  ");
		Dprint("\n7: Reverse  ");
		Dprint("\n Enter option Number: ");
		gets(temp);
		Dprint("\n==========================");
		switch(atoi(temp)){
		case 1:
			Add_student();
			break;
		case 2:
			Delete_student();
			break;
		case 3:
			View_students();
			break;
		case 4:
			Delete_all();
			break;
		case 5:
			length();
			break;
		case 6:
			middle();
			break;
		case 7:
			Reverse();
			break;
		default:
			Dprint("\n Wrong option");
		}
	}
}
