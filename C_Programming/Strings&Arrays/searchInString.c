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
	int loc;
	int i=0,j=0;
	printf("enter string : ");
	fflush(stdout);
	gets(x);
	fflush(stdin);
	printf("enter char to search for : ");
	fflush(stdout);
	scanf("%c",&y);
	while(x[i]!='\0'){
		if(y==x[i]){
			j++;
		}
     i++;
	}
	printf("Repeated : %d times",j);


}
