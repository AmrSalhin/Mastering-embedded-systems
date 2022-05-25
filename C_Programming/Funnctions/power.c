/*
 * main.c
 *
 *  Created on: May 25, 2022
 *      Author: Amr Salhen
 */


#include <stdio.h>
int pwr(int x,int y);
void main(){
	int base,power;
	printf("Enter base number : ");
	fflush(stdout);
	scanf("%d",&base);
	printf("\nEnter power number : ");
	fflush(stdout);
	scanf("%d",&power);
	printf("\nResult of %d^%d is %d",base,power,pwr(base,power));


}
int pwr(int x,int y){
	if(y!=0){
		return x*pwr(x,y-1);
	}
return 1;
}
