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
scanf("%d",&x);
int i,factorial=1;
if(x>0){
	for(i=0;i<x;i++){
		factorial*=(x-i);
	}
	printf("factorial equal : %d",factorial);
}else if(x==0){
	printf("factorial equal : 1");
}else{
	printf("Wrong Data");
}

}
