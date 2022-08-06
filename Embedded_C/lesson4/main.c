
#include "Platform_Types.h"
#include "BIT_MATH.h"

#define SYSCTR_RCGC2_R     (*((vuint32*)0x400FE108))
#define GPIO_PORTF_DIR_R   (*((vuint32*)0x40025400))
#define GPIO_PORTF_DEN_R   (*((vuint32*)0x4002551C))
#define GPIO_PORTF_DATA_R  (*((vuint32*)0x400253FC))

int main(){
	vuint32 delay_count; 
	
	SYSCTR_RCGC2_R = 0x20;
	/*delay to make sure GPIO is up and running*/
	for(delay_count=0;delay_count<200;delay_count++);
	GPIO_PORTF_DIR_R |= 1<<3; /*DIR is output in pin 3 PORTF*/
	GPIO_PORTF_DEN_R |= 1<<3; 
	while(1){
		Set_bit(GPIO_PORTF_DATA_R,3);
		for(delay_count=0;delay_count<20000;delay_count++);
		Clr_bit(GPIO_PORTF_DATA_R,3);
		for(delay_count=0;delay_count<20000;delay_count++);
	}
	
	
	
	return 0;
}