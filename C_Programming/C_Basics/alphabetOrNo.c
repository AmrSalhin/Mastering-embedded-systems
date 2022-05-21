/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{char x;

printf("Enter char : ");
scanf("%c",&x);

if(x>64&&x<91){
	printf("%c is alphabet",x);
}else if(x>96&&x<123){
	printf("%c is alphabet",x);
}else{
	printf("%c is not alphabet",x);
}


}
