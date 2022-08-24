/*
 * main.c
 *
 *  Created on: Aug 23, 2022
 *      Author: Amr Salhen
 */

#include "fifo.h"
#include "studentData.h"


int main()
{
	char temp_text[5];
	FIFO_BUF_t students_queue;
	student_info st [55];
	init_FIFO(&students_queue, st);

	while(1)
	{
		Dprintf("\n ================================== \n");
		Dprintf("\n \t Choose one of the following options\n");
		Dprintf("\n 1. Add student from file ");
		Dprintf("\n 2. Add student manually ");
		Dprintf("\n 3. Find student by roll number ");
		Dprintf("\n 4. Find student by first name");
		Dprintf("\n 5. Find student registered in course");
		Dprintf("\n 6. Print students count");
		Dprintf("\n 7. Delete student by roll number");
		Dprintf("\n 8. Update student by roll number");
		Dprintf("\n 9. Exit\n");

		gets(temp_text);

		switch(atoi(temp_text))
		{
		case 1:
			add_student_file(&students_queue);
			break;
		case 2:
			add_student_manually(&students_queue);
			break;
		case 3:
			find_roll(&students_queue);
			break;
		case 4:
			find_first_name(&students_queue);
			break;
		case 5:
			find_course(&students_queue);
			break;
		case 6:
			total_student(&students_queue);
			break;
		case 7:
			delete_student(&students_queue);
			break;
		case 8:
			update_student(&students_queue);
			break;
		case 9:
			return 0;
			break;
		default :
			continue;


		}
	}




}
