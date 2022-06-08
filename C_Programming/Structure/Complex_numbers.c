/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************            8/June/2022                     ****************/
/*************     Distance calculation using struct      ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
#include <stdio.h>

struct SComplex{
	float m_real;
	float m_imaginary;
}number1,number2;
void store(struct SComplex* number1,struct SComplex* number2);
void Calculate(struct SComplex* number1,struct SComplex* number2);

void main(){
	store(&number1,&number2);
	Calculate(&number1,&number2);

}
void store(struct SComplex* number1,struct SComplex* number2){
	printf("Enter 1st complex number\n");
	printf("Enter real and imaginary respectively");
	fflush(stdout);
	scanf("%f %f",&number1->m_real,&number1->m_imaginary);
	printf("Enter  complex number\n");
	printf("Enter 2nd real and imaginary respectively");
	fflush(stdout);
	scanf("%f %f",&number2->m_real,&number2->m_imaginary);
}
void Calculate(struct SComplex* number1,struct SComplex* number2){
	float sum_real,sum_imaginary;
	sum_real=number1->m_real+number2->m_real;
	sum_imaginary=number1->m_imaginary+number2->m_imaginary;

	printf("sum = %.1f+%.1fj",sum_real,sum_imaginary);
}
