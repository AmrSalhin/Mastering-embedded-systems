/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{float x,y,z;

printf("Enter number a : ");
scanf("%f",&x);
printf("Enter number b : ");
scanf("%f",&y);
z=x;
x=y;
y=z;
printf("number 'a' after swap : %f\n",x);
printf("number 'b' after swap : %f",y);
}
