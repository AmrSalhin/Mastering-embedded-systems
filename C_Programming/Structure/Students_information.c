/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************            8/June/2022                     ****************/
/*************            Students infotmation            ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
#include <stdio.h>

struct SStudent{
	char m_name[50];
	int m_roll;
	float m_marks;
};


void main(){
	struct SStudent x[10];
	int i;
		printf("Enter Students information\n");
		for(i=0;i<10;i++){
			x[i].m_roll=i+1;
			printf("for roll number %d\n",x[i].m_roll);
			fflush(stdin);
			printf("Enter name : ");
			fflush(stdout);
			gets(x[i].m_name);
			printf("Enter Marks : ");
			fflush(stdout);
			scanf("%f",&x[i].m_marks);
		}
		printf("Displaying Students information\n");
			for(i=0;i<10;i++){

				printf("information for roll number %d\n",x[i].m_roll);
				printf("Enter name : %s\n",x[i].m_name);
				printf("Enter Marks : %0.1f\n",x[i].m_marks);

			}


}
