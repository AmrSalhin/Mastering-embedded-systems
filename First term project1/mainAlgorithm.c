
#include "mainAlgorithm.h"

int threshold =20;
void(*mainAlgoState)();
extern int Pval;

STATE_define(setPressure){

	mainAlgoState=STATE(pressureDetection);
}

STATE_define(pressureDetection){
	//Detect if the pressure is high
	if(Pval>=threshold){
		STATE(highPressure)();
	}
	mainAlgoState=STATE(pressureDetection);
}


