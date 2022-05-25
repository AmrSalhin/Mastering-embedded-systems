/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{
	float x[100];
	int y,z,loc;
	int i=0,j=0;
	printf("enter number of elements : ");
	fflush(stdout);
	scanf("%d",&y);
	for(i=0;i<y;i++){
		x[i]=i+1;
	}
	for(i=0;i<y;i++){
		printf("%f   ",x[i]);
	}
	printf("\n");
	printf("enter number to be inserted : ");
	fflush(stdout);
	scanf("%d",&z);
	printf("enter the location : ");
	fflush(stdout);
	scanf("%d",&loc);
	x[loc-1]=z;
	for(i=0;i<y;i++){
		printf("%f   ",x[i]);
	}



}
