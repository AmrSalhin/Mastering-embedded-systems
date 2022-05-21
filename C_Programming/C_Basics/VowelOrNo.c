/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{char x;

printf("Enter an char you want to check : ");
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
	printf("%c is vowel",x);
}else{
	printf("%c is consonant",x);
}


}
