#include "Alarm.h"
#include "driver.h"


void (*alarmState)();


STATE_define(highPressure){
	alarmState=STATE(alarmON);
}
STATE_define(alarmON){
	Set_Alarm_actuator(0);
	alarmState=STATE(alarmWaiting);
}
STATE_define(alarmOff){
	Set_Alarm_actuator(1);
}
STATE_define(alarmWaiting){
	Delay(500000);
	alarmState=STATE(alarmOff);
}
