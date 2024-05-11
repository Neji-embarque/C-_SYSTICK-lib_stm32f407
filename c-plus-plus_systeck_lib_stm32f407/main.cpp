#include "my_stm32f4_gpio_lib.h"                 
#include "my_stm32f4_systick_lib.h" 

SYSTICK delayTimer;
GPIO_InitTypeDef myGPIO_InitStruct;



int main(void){
	
  myGPIO_InitStruct = __gpio_pin_params(GPIO_PIN_13,GPIO_MODE_OUTPUT_PP,GPIO_NOPULL);
	Gpio myoutput1 (PORTD,GPIOD,&myGPIO_InitStruct);
	
	while(1){
		
		  myoutput1.LIB_GPIO_TogglePin(GPIOD,GPIO_PIN_13);
			delayTimer.LIB_SYSTICK_Delay_Ms(1000);
			
	

	}
}
