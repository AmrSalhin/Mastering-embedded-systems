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
	float sum=0,avg;
	int i=0,j=0,y;
	printf("Enter the numbers of data : ");
	fflush(stdout);
	scanf("%d",&y);
	for(i=0;i<y;i++){
		printf("%d.Enter number : ",i+1);
		fflush(stdout);
		scanf("%f",&x[i]);
	}
	for(i=0;i<y;i++){
		sum=sum+x[i];
	}
	avg=sum/y;
	printf("average = %f",avg);


}
