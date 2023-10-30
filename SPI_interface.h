#ifndef DMA_INTERFACE_H
#define DMA_INTERFACE_H
#include "../include/STD_TYPES.h"
void M_SPI_void_MasterInit();
void M_SPI_void_MasterTransmit(u8 copy_u8Data);
void M_SPI_void_SlaveInit();
u8 M_SPI_void_SlaveReceive();






#endif
