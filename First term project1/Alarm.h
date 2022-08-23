/*
 * Alarm.h
 *
 *  Created on: Aug 23, 2022
 *      Author: Amr Salhen
 */

#ifndef ALARM_H_
#define ALARM_H_
#include "state.h"

STATE_define(highPressure);
STATE_define(alarmON);
STATE_define(alarmOff);
STATE_define(alarmWaiting);

extern void (*alarmState)();



#endif /* ALARM_H_ */
