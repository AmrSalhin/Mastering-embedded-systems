/*
 * CA.h
 *
 *  Created on: Aug 21, 2022
 *      Author: Amr Salhen
 */

#ifndef CA_H_
#define CA_H_

#include "state.h"

//States
enum
{
	CA_waiting,
	CA_driving
}CA_state_id;


//Functions APIs
STATE_define(CA_waiting);
STATE_define(CA_driving);


//Global pointer to function
extern void (*CA_state)();



#endif /* CA_H_ */
