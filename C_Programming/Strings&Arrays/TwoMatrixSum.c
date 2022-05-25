/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Amr Salhen
 */
#include <stdio.h>

void main ()
{
	float x[2][2],y[2][2];
	int i=0,j=0;
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter a%d%d : ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&x[i][j]);
			
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter b%d%d : ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&y[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			x[i][j]=x[i][j]+y[i][j];
		}
	}
	printf("Sum of matrix is \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%f    ",x[i][j]);
			
		}
		printf("\n");
	}


}
