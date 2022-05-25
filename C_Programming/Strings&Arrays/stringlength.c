/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{
	char x[100];
	char y;
	int z,loc;
	int i=0,j=0,flag=0;
	printf("enter string : ");
	fflush(stdout);
	gets(x);
	
	
	while(x[i]!='\0'){

		j++;

		i++;
	}
	printf("String length : %d ",j);


}
