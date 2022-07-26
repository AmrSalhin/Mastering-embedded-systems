/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************               15/jul/2022                  ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/


#include <stdio.h>
void main(void){
	int m;
	int* ab;
	m=29;
	printf("address of m %p \n",&m);
	printf("value of m %d \n",m);
	ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("address of pointer ab %p \n",ab);
	printf("value of pointer ab %d \n",*ab);
	m=34;
	printf("The value of m assigned to 34 now.\n");
	printf("address of pointer ab %p \n",ab);
	printf("value of pointer ab %d \n",*ab);
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("address of m %p \n",&m);
	printf("value of m %d \n",m);
	
	
	
}