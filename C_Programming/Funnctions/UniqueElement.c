/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************            2/June/2022                     ****************/
/*************   Unique Element in array with one loop    ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
#include <stdio.h>

void unique(int arr[], int n,int k);

void main(){
	int a[7]={2,6,2,5,6,5,3};



	unique(a, 7,7);

}
void unique(int arr[], int n,int k)
{
	/* n -> the size of array*/
	/* k -> the last element index +1 */


	int j;
	if(k>0){
		/* Outer loop */
		unique(arr, n,--k);
		/*Inner loop*/
		for(j=0;j<n;j++){

			if(arr[k]==arr[j]&&k!=j)
				break;

		}
		if(j==n){
			printf("\n unique elements in an array is : %d \n",arr[k]);}

	}


}
