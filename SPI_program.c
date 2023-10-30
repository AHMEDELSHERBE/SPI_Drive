/*
 * SPI_program.c
 *
 *  Created on: 30 Oct 2023
 *      Author: Fu
 */

#include "../include/SPI_interface.h"
#include "../include/SPI_priv.h"
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

void M_SPI_void_MasterInit(void)
{

	SET_BIT(SPI1->SPI_CR1,  2);
	CLR_BIT(SPI1->SPI_CR1,3);
	SET_BIT(SPI1->SPI_CR1, 4);
	CLR_BIT(SPI1->SPI_CR1,5);
	SET_BIT(SPI1->SPI_CR1, 6);

	/* Enable SPI, Master, set clock rate fck/8 */

  /*
  // ENABLE MC AS MASTER
	SET_BIT(SPI1->SPI_CR1,  2);

	// SELECT BAUD RATE  ( fPCLK/8)
	CLR_BIT(SPI1->SPI_CR1,3);
	SET_BIT(SPI1->SPI_CR1, 4);
	CLR_BIT(SPI1->SPI_CR1,5);

	// ENABLE SPI(SPE BIT)
	SET_BIT(SPI1->SPI_CR1, 6); */

}
void M_SPI_void_MasterTransmit(u8 copy_u8Data)
{
	/* Start transmission */

	SPI1->SPI_DR = copy_u8Data;

	/* Wait for transmission complete */
	//while((SPI1->SPI_SR & (1<<7)))

	while( GET_BIT(SPI1->SPI_SR,1) == 0 )
	{
		asm("NOP") ;
	}



}
void M_SPI_void_SlaveInit()
{

	SET_BIT(SPI1->SPI_CR1, 9);
	SET_BIT(SPI1->SPI_CR1, 6);

	//FOR SLAVE MANAGEMENT(SSM BIT)

	//SET_BIT(SPI1->SPI_CR1, 9);

	/* Enable SPI */

	//SET_BIT(SPI1->SPI_CR1, 6);
}
u8 M_SPI_void_SlaveReceive()
{
	/* Wait for reception complete */
	while((SPI1->SPI_SR & (1<<7)));
	/* Return data register */
	return SPI1->SPI_DR;

}

