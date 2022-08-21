/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Amr Salhen
 */


#include "CA.h"


void setup ()
{

	CA_state = STATE(CA_waiting);
}


int main()
{
	int i;

	setup();

	while(1)
	{

		CA_state();
		for(i=0; i<=2000; i++);
	}

	return 0;
}
