/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{float x,y,z;

printf("Enter three numbers : ");
fflush(stdout);
scanf("%f %f %f",&x,&y,&z);

if(x>y){
	if(x>z){
		printf("%f is the biggest number",x);
	}
}else if(y>z){
	printf("%f is the biggest number",y);
}else{
	printf("%f is the biggest number",z);
}


}
