/*
 * DC.c
 *
 *  Created on: Aug 21, 2022
 *      Author: Amr Salhen
 */

#include "DC.h"

void (*DC_state)();
unsigned int DC_speed = 0;

void DC_init()
{
	printf("DC init\n");
}


void DC_set_speed(int s)
{
	DC_speed = s;
	DC_state = STATE(DC_busy);


}


STATE_define(DC_idle)
{

	DC_state_id = dc_idle;

	printf("DC_idle state : speed = %d \n", DC_speed);

}


STATE_define(DC_busy)
{

	DC_state_id = dc_busy;


	DC_state = STATE(DC_idle);

	printf("DC_busy state : speed = %d \n", DC_speed);

}
