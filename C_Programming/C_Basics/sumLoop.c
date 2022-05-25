/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{int x;
printf("Enter number : ");
fflush(stdout);
scanf("%d",&x);
int i,sum=0;
for(i=0;i<x;i++){
	sum+=(i+1);
}
printf("sum equal : %d",sum);


}
