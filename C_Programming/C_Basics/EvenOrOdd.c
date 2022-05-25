/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{int x;

printf("Enter an integer you want to check : ");
fflush(stdout);
scanf("%d",&x);
if(x%2==0){
	printf("%d is even",x);
}else{
	printf("%d is odd",x);
}


}
