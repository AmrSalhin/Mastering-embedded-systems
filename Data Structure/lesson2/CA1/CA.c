/*
 * CA.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Amr Salhen
 */

#include <stdio.h>
#include <stdlib.h>
#include "CA.h"
#include "state.h"

int get_distance_random (int l, int r, int count);


unsigned int CA_speed = 0;
unsigned int CA_distance = 0;
unsigned int CA_threshold = 50;


void (*CA_state)();



STATE_define(CA_waiting)
{

	CA_state_id = CA_waiting;

	CA_speed = 0;

	CA_distance = get_distance_random (45, 55, 1);


	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("Waiting state : distance = %d speed = %d\n", CA_distance, CA_speed);
}


STATE_define(CA_driving)
{

	CA_state_id = CA_driving;

	CA_speed = 30;

	CA_distance = get_distance_random (45, 55, 1);


	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("Driving state : distance = %d speed = %d\n", CA_distance, CA_speed);
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



