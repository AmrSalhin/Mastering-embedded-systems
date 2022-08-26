/*
 * studentData.c
 *
 *  Created on: Aug 23, 2022
 *      Author: Amr Salhen
 */


#include "studentData.h"
#include "fifo.h"

void add_student_file(FIFO_BUF_t* student){
	char fileName[50];
	//MAKE USER ENTER THE FILE NAME
	Dprintf("\nEnter Name of File to read it ");
	gets(fileName);
	//Pointer to file
	FILE *Pfile=NULL;
	Pfile=fopen(fileName, "r");
	//check if the file exist
	if(Pfile==NULL){
		Dprintf("\n=======File dosn't EXIST==========");
		return;
	}

	student_info newStudent;
	//extract the information from file
	while(!feof(Pfile)){
		fscanf(Pfile,"%d",&newStudent.roll);
		int num = newStudent.roll;
		//Check if the roll number is repeated
		if(search_for_roll(student,newStudent,num)==roll_num_exist){
			Dprintf("\n roll number %d is Repeated Roll Number",newStudent.roll);
			fscanf(Pfile, "%*[^\n]");
			continue ;
		}
		fscanf(Pfile , "%s" ,&newStudent.fname);
		fscanf(Pfile, "%s" ,&newStudent.lname);
		fscanf(Pfile , "%f" ,&newStudent.GPA);
		for(int i =0 ;i< 5 ;i++)
		{
			fscanf(Pfile , "%d" ,&newStudent.cid[i]);
		}

		if((FIFO_enqueue(student,newStudent) == FIFO_NO_ERROR))
		{

			Dprintf("\nRoll Number %d added successfully",newStudent.roll);
		}
		else
		{
			Dprintf("\n============  Failed  ============ ");
		}
	}

	fclose(Pfile);
}
void add_student_manually(FIFO_BUF_t* student){
	student_info newStudent;
	Dprintf("\nEnter Student Roll number: ");
	scanf("%d",&newStudent.roll);
	int num =newStudent.roll;
	student_info temp;
	if(search_for_roll(student, temp, num)==roll_num_exist){
		Dprintf("\n Roll number %d is Repeated Roll Number",newStudent.roll);
		return;
	}
	Dprintf("\nEnter Student First Name: ");
	scanf("%s",&newStudent.fname);
	Dprintf("\nEnter Student Last Name: ");
	scanf("%s",&newStudent.lname);

	Dprintf("\nEnter Student GPA: ");
	scanf("%f",&newStudent.GPA);

	for(int i =0 ; i < 5 ;i++)
	{
		Dprintf("\nEnter Student course number %d ID ",i+1);
		scanf( "%d",& newStudent.cid[i]);

	}
	if((FIFO_enqueue(student,newStudent) == FIFO_NO_ERROR))
	{
		Dprintf("\nStudent: %d added successfully " , newStudent.roll);
	}
	else
	{
		Dprintf("\nStudent: %d Failed to be added  " , newStudent.roll);
	}
}
void find_roll(FIFO_BUF_t * student){

	int num = 0;
	Dprintf("\nEnter Student Roll Number: ");
	scanf("%d",&num);
	student_info newStudent;
	if (search_for_roll(student , &newStudent , num) == roll_num_exist)
	{
		Dprintf("\nStudent with Roll_No: %d ",num);
		Dprintf("\nStudent First Name: %s ",newStudent.fname);
		Dprintf("\nStudent Last Name: %s ", newStudent.lname);
		Dprintf("\nStudent GPA: %0.2f ",newStudent.GPA);
		Dprintf("\nStudent Courses IDs: ");
		for(int i = 0 ;i<5 ;i++)
		{
			Dprintf(" %d ",newStudent.cid[i]);
		}
	}
	else
		Dprintf("\nStudent with Roll_No: %d DOESNOT Exist in the list ",num);

}


registeration_status find_first_name(FIFO_BUF_t * student){
	char name[20];
	int flag=0;
	Dprintf("\nEnter Student First name: ");
	gets(name);
	student_info* newStudent=student->tail;

	for(int i=0;i<student->count;i++){
		if(! strcmp(newStudent->fname , name)){
			flag=1;
			Dprintf("\nStudent Roll_No: %d ",newStudent->roll);
			Dprintf("\nStudent First Name: %s ",newStudent->fname);
			Dprintf("\nStudent Last Name: %s", newStudent->lname);
			Dprintf("\nStudent GPA: %0.2f ",newStudent->GPA);
			Dprintf("\nStudent Courses IDs: ");
			for(int j = 0 ;j<5 ;j++)
			{
				Dprintf(" %d,",newStudent->cid[j]);
			}
			Dprintf("\n=====================================")
		}

		newStudent++;
	}
	//	Dprintf("\nStudent First Name: %s ",newStudent->fname);
	if(flag==1){
		return name_exist;
	}else{
		Dprintf("\nStudent DOESNOT Exist in the list ");
		return name_dosenot_exist;
	}
}
void find_course(FIFO_BUF_t * student){
	student_info* temp=student->tail;
	int num,flag=0;
	Dprintf("\nEnter Course ID: ");
	scanf("%d",&num);
	for(int i=0;i<student->count;i++){
		//		Dprintf("\ncount %d",student->count);
		for(int j=0;j<5;j++){
			//			Dprintf("\nnum=%d  cid=%d",num,temp->cid[j]);
			if(num==temp->cid[j]){
				Dprintf("\nThe Student Details are");
				Dprintf("\nFirst Name is %s",temp->fname);
				Dprintf("\nLast Name is %s",temp->lname);
				Dprintf("\nRoll number is %d",temp->roll);
				Dprintf("\nStudent GPA %0.2f",temp->GPA);
				flag=1;
			}
		}
		temp++;
	}
	if(flag==0){
		Dprintf("\nNo student has registered this Course");
	}

}
void total_student(FIFO_BUF_t * student){
	Dprintf("\nTotal number of Students are: %d",student->count);
}
void delete_student(FIFO_BUF_t * student){
	int num,flag=0;
	student_info* temp=student->tail;
	student_info* temp2;
	Dprintf("\nEnter Roll number to be deleted: ");
	scanf("%d",&num);
	for(int i=0;i<student->count;i++){
		if(temp->roll==num){
			flag=1;
			student->count--;
			temp2=temp+1;
			for(int j=i;j<student->count;j++){
				temp->roll=temp2->roll;
				strcpy(temp->fname,temp2->fname);
				strcpy(temp->lname,temp2->lname);
				temp->GPA=temp2->GPA;
				for(int k=0;k<5;k++){
					temp->cid[k]=temp2->cid[k];
				}
			}
		}
		temp++;
	}
	if(flag==1){
		Dprintf("\nDeleted successfully");
	}else{
		Dprintf("\nRoll number dose not exist");
	}
}
void update_student(FIFO_BUF_t * student){
	int num,tempNum,flag=0;
	float ftemp;
	char tempText[50];
	student_info* newS=student->tail,test;
	Dprintf("\nEnter roll number to update: ")
	gets(tempText);
	num=atoi(tempText);
	if(search_for_roll(student,newS, num)==roll_num_exist){
		flag=1;
		Dprintf("\n1. First name");
		Dprintf("\n2. last name");
		Dprintf("\n3. roll number");
		Dprintf("\n4. GPA");
		Dprintf("\n5. Courses\n");
		gets(tempText);
		num=atoi(tempText);
		switch (num) {
		case 1:
			Dprintf("\nEnter the new first name ");
			gets(tempText);
			strcpy(newS->fname,tempText);
			Dprintf("\n=======Updated successfully=========");
			break;
		case 2:
			Dprintf("\nEnter the new last name ");
			gets(tempText);
			strcpy(newS->lname,tempText);
			Dprintf("\n=======Updated successfully=========");
			break;
		case 3:
			Dprintf("\nEnter the new roll number ");
			scanf("%d",&tempNum);
			if(search_for_roll(student, test, tempNum)==roll_num_dosenot_exist){
				newS->roll=tempNum;
				Dprintf("\n=======Updated successfully=========");
			}else{
				Dprintf("\nRoll number already taken");
			}
			break;
		case 4:
			Dprintf("\nEnter the new GPA ");
			scanf("%f",&ftemp);
			newS->GPA=ftemp;
			Dprintf("\n=======Updated successfully=========");
			break;
		case 5:
			for(int i=0;i<5;i++){
				Dprintf("\nEnter the new course[%d] ",i);
				scanf("%d",&newS->cid[i]);

			}
			Dprintf("\n=======Updated successfully=========");
			break;
		default:
			Dprintf("\n invalid option");
			break;
		}
	}
	if(flag==0){
		Dprintf("\nRoll number dose not exist");
	}
}

registeration_status search_for_roll(FIFO_BUF_t * student,student_info* new,int num){
	student_info* temp=student->tail;
	for(int i=0;i<student->count;i++){
		if(temp->roll==num){
			*new=*temp;
			return roll_num_exist;
		}
		temp++;
	}
	return roll_num_dosenot_exist;
}

