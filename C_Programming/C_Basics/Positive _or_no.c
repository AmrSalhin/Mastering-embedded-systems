/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{float x;

printf("Enter number : ");
scanf("%f",&x);
if(x>0){
	printf("%f is positive",x);
}else if(x<0){
	printf("%f is Negative",x);
}else if(x==0){
	printf("you entered zero");
}


}
