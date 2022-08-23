/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Amr Salhen
 */

#include "PressureSensor.h"
#include "mainAlgorithm.h"
#include "Alarm.h"
#include "driver.h"



void setup ()
{
	//initialize all drivers
	//initialize IRQ
	GPIO_INITIALIZATION();
	//initialize all blocks
	//set states pointers for each block
	GPpressureState=STATE(PS_reading);
	mainAlgoState=STATE(pressureDetection);
	alarmState=STATE(alarmOff);

}


int main()
{
	setup();
	while (1)
	{
		GPpressureState();
		mainAlgoState();
		alarmState();
	}
}
