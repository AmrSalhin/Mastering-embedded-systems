/*
 * mainAlgorithm.h
 *
 *  Created on: Aug 23, 2022
 *      Author: Amr Salhen
 */

#ifndef MAINALGORITHM_H_
#define MAINALGORITHM_H_
#include "state.h"

STATE_define(setPressure);
STATE_define(pressureDetection);
extern void(*mainAlgoState)();

#endif /* MAINALGORITHM_H_ */
