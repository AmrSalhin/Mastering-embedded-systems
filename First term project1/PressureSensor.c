
#include "PressureSensor.h"
#include "driver.h"


int Pval;
void (* GPpressureState)();

STATE_define(PS_reading){
	//get the pressure value
	Pval=getPressureVal();
	ST_setPressure();
	//Enter waiting state
	GPpressureState=STATE(PS_waiting);
}
STATE_define(PS_waiting){
	//wait between two readings
	Delay(6000);
	//take the next reading
	GPpressureState=STATE(PS_reading);
	GPpressureState();
}
