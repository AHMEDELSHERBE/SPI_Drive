#include "SPI_interface.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "delay.h"
int main()
{ MRCC_voidInit();
 MRCC_voidEnablePeripheral(RCC_BUS_APB2 , 3);
 MGPIO_voidSetPinDirection(PORTA,3,GPIOA_OUTPUT_2MHZ,GPIOA_OUTPUT_PUSH_PULL);	
 M_SPI_void_MasterInit();
 //M_SPI_void_SlaveInit()
 while ()
 {	M_SPI_void_MasterTransmit('8')
	
	
			MGPIO_voidSetPinValue(PORTA,3,1);
		
		
	
	 
 }
 
 
 
 
 
}