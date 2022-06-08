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

struct SInformatin{
	char m_name[100];
	int m_roll;
	int m_marks;
}student1;
void store(struct SInformatin* student);
void Display(struct SInformatin* student);

void main(){
store(&student1);
Display(&student1);

}
void store(struct SInformatin* student){
	printf("Enter Student information\n");
	printf("Enter name : ");
	fflush(stdout);
	gets(student->m_name);
	printf("Enter roll number : ");
	fflush(stdout);
	scanf("%d",&student->m_roll);
	printf("Enter Marks : ");
	fflush(stdout);
	scanf("%d",&student->m_marks);
}
void Display(struct SInformatin* student){
	printf("Displaying information\n");
		printf("student name : %s\n",student->m_name);
		printf("roll number : %d\n",student->m_roll);
		printf("total marks : %d",student->m_marks);
}
