/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************               24/may/2022                  ****************/
/*************          factorial by recursion            ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/


#include <stdio.h>
int factorial(int x);
void main(){
	int x;
	printf("Enter number : ");
	fflush(stdout);
	scanf("%d",&x);
	printf("factorial of %d is equal %d",x,factorial(x));

}
int factorial(int x){

	if(x==0){
		return 1;
	}else{
		if(x!=1)
			return x*factorial(x-1);
	}
}