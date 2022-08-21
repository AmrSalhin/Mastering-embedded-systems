/*
 * DC.h
 *
 *  Created on: Aug 21, 2022
 *      Author: Amr Salhen
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"

//States
enum
{
	dc_idle,
	dc_busy
}DC_state_id;


//Functions APIs
STATE_define(DC_idle);
STATE_define(DC_busy);

void DC_init();


//Global pointer to function
extern void (*DC_state)();


#endif /* DC_H_ */
