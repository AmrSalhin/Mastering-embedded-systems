/*
 * US.c
 *
 *  Created on: Aug 21, 2022
 *      Author: Amr Salhen
 */


#include "US.h"

int get_distance_random (int l, int r, int count);
void (*US_state)();


unsigned int US_distance = 0;


void US_init()
{
	printf("US init\n");
}



STATE_define(US_busy)
{

	US_state_id = us_busy;


	US_distance = get_distance_random (45, 55, 1);
	printf("US busy state : distance = %d \n", US_distance);
	US_set_distance(US_distance);
	US_state = STATE(US_busy);

}


int get_distance_random (int l, int r, int count)
{
	int i, rand_num;
	for(i=0; i<count; i++)
	{
		rand_num =( rand() % (r - l + 1) ) + l;
	}
	return rand_num;

}
