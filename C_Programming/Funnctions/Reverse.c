/*
 * main.c
 *
 *  Created on: May 25, 2022
 *      Author: Amr Salhen
 */


#include <stdio.h>
void reverse(void);
void main(){

	printf("Enter sentence : ");
	reverse();


}
void reverse(void){
	char s;
	fflush(stdout);
	scanf("%c",&s);
	fflush(stdout);

	if(s!='\n'){
	reverse();
	printf("%c",s);}
}
