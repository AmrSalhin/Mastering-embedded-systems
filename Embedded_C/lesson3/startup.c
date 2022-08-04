/* start up CORTEXM3
	ENG . Amr Ahmed*/
	
#include "Platform_Types.h"


extern int main(void);

void reset_Handler(void);

void Default_Handler(){

	reset_Handler();
}

void NMI_Handler(void)__attribute__((weak,alias ("Default_Handler")));;
void H_fault_Handler(void)__attribute__((weak,alias ("Default_Handler")));;
void NM_fault_Handler(void)__attribute__((weak,alias ("Default_Handler")));;
void Bus_fault(void)__attribute__((weak,alias ("Default_Handler")));;
void Usage_fault_Handler(void)__attribute__((weak,alias ("Default_Handler")));;


extern uint32 _stack_top;
uint32 vectors[] __attribute__((section(".vectors")))  = {

(uint32) &_stack_top,
(uint32) &reset_Handler,
(uint32) &NMI_Handler,
(uint32) &H_fault_Handler,
(uint32) &NM_fault_Handler,
(uint32) &Bus_fault,
(uint32) &Usage_fault_Handler

};

extern uint32 _E_text;
extern uint32 _S_data;
extern uint32 _E_data;
extern uint32 _S_bss;
extern uint32 _E_bss;

void reset_Handler(){

	// Copy DATA SECTION From FLASH to SRAM
	uint32 size_data =  (uint8*)&_E_data - (uint8*)&_S_data;
	uint8* src_data   =  (uint8*)&_E_text;
	uint8* dst_data   =  (uint8*)&_S_data;
	for(int i =0 ; i < size_data ; i++){
		*((uint8*)dst_data++) = *((uint8*)src_data++);
	}

	// initialize bss SECTION in SRAM With Zero
	uint32 size_bss =  (uint8*)&_E_bss - (uint8*)&_S_bss;
	dst_data =  (uint8*)&_S_bss;
	for(int i =0 ; i < size_bss ; i++){
		*((uint8*)dst_data++) = (uint8) 0;
	}

	// Jump To main
	main();
}
