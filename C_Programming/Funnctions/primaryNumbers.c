/*
 * main.c
 *
 *  Created on: May 25, 2022
 *      Author: Amr Salhen
 */


#include <stdio.h>
void PrimNumbers(int x,int y);
void main(){
	int num1,num2;
	printf("Enter tow numbers : \n");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);

	PrimNumbers(num1, num2);
}
void PrimNumbers(int x,int y){
	int notprimFlag;
	int i;
	printf("prime numbers between %d and %d :",x,y);
	for(;x<y;x++){
		notprimFlag=0;
		for(i=2;i<x;i++){
			if(x%i==0){
				notprimFlag=1;
				break;
			}
		}
		if(notprimFlag==0){
			printf("%d ",x);
		}
	}


}
