#ifndef SPI_PRIV_H
#define SPI_PRIV_H
#include "STD_TYPES.h"

typedef	struct
{
	volatile	u32		SPI_CR1 ;
	volatile	u32		SPI_CR2 ;
	volatile	u32		SPI_SR ;
	volatile	u32     SPI_DR ;
	volatile	u32    SPI_CRCPR ;
	volatile	u32    SPI_RXCRCR ;
	volatile	u32    SPI_TXCRCR ;
	volatile	u32    SPI_I2SCFGR ;
	volatile	u32    SPI_I2SPR ;



}SPI_Type;

#define		SPI1 	((SPI_Type *) 0x40013000)





#endif
