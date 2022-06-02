/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************                 21/may/2022                ****************/
/*************      calculate transpose for a matrix      ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
#include <stdio.h>

void main ()
{
	float x[100][100],y[100][100];
	int rows,col;
	int i=0,j=0;
	printf("enter number of rows and columns : ");
	fflush(stdout);
	scanf("%d%d",&rows,&col);
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			printf("enter element a%d%d : ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&x[i][j]);
		}
	}
	printf("matrix you entered is\n");
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++){
			printf("%f   ",x[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<col;i++){
		for(j=0;j<rows;j++){
			y[i][j]=x[j][i];
		}

	}
	printf("transpose equal\n");
	for(i=0;i<col;i++){
		for(j=0;j<rows;j++){
			printf("%f   ",y[i][j]);
		}
		printf("\n");
	}


}
