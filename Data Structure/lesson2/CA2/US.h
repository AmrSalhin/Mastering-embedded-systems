/*
 * US.h
 *
 *  Created on: Aug 21, 2022
 *      Author: Amr Salhen
 */

#ifndef US_H_
#define US_H_

#include "state.h"

//States
enum
{
	us_busy
}US_state_id;


//Functions API
STATE_define(US_busy);

void US_init();

//Global pointer to function
extern void (*US_state)();


#endif /* US_H_ */
