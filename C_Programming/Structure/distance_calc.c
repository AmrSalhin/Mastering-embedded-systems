/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
/*************         Amr Ahmed Mostafa Salhien          ****************/
/*************            8/June/2022                     ****************/
/*************C Program to store information using struct ****************/
/*************************************************************************/
/*************************************************************************/
/*************************************************************************/
#include <stdio.h>

struct Sdistance{
	float m_feet;
	float m_inch;
}distance1,distance2;
void store(struct Sdistance* distance1,struct Sdistance* distance2);
void Calculate(struct Sdistance* distance1,struct Sdistance* distance2);

void main(){
store(&distance1,&distance2);
Calculate(&distance1,&distance2);

}
void store(struct Sdistance* distance1,struct Sdistance* distance2){
	printf("Enter information for 1st distance\n");
	printf("Enter feet : ");
	fflush(stdout);
	scanf("%f",&distance1->m_feet);
	printf("Enter inchs : ");
	fflush(stdout);
	scanf("%f",&distance1->m_inch);
	printf("Enter information for 2nd distance\n");
		printf("Enter feet : ");
		fflush(stdout);
		scanf("%f",&distance2->m_feet);
		printf("Enter inches : ");
		fflush(stdout);
		scanf("%f",&distance2->m_inch);
}
void Calculate(struct Sdistance* distance1,struct Sdistance* distance2){
	float sum,inches,feets;
	distance1->m_inch=distance1->m_inch+distance2->m_inch;
	feets=(int)(distance1->m_inch/11.99);
	inches=(distance1->m_inch/11.99)-feets;
	sum=feets+distance1->m_feet+distance2->m_feet;
	printf("sum of distances = %.0f'-%.2f\"",sum,inches);
}
