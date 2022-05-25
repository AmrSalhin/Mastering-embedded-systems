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
	int i=0,j=0,flag=0;
	printf("enter number of elements : ");
	fflush(stdout);
	scanf("%d",&y);
	for(i=0;i<y;i++){
		x[i]=(i+1)*11;
	}
	for(i=0;i<y;i++){
		printf("%f   ",x[i]);
	}
	printf("\n");
	printf("enter number to search for : ");
	fflush(stdout);
	scanf("%d",&z);

	for(i=0;i<y;i++){
		if(z==x[i]){
			printf("number found at the location : %d ",i+1);
			flag =1;
			break;
		}
	}
	if(flag==0){
		printf("not found");
	}


}
