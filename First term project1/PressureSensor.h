/*
 * PressureSensor.h
 *
 *  Created on: Aug 23, 2022
 *      Author: Amr Salhen
 */

#ifndef PRESSURESENSOR_H_
#define PRESSURESENSOR_H_
#include "state.h"

STATE_define(PS_reading);
STATE_define(PS_waiting);
extern void (* GPpressureState)();

#endif /* PRESSURESENSOR_H_ */
