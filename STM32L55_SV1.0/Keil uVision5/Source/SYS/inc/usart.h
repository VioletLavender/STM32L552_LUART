#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "sys.h" 







void MX_CLK_Init(void);
void MX_LPUART1_UART_Init(void);
void HAL_UART_MspInit(UART_HandleTypeDef* uartHandle);
void HAL_UART_MspDeInit(UART_HandleTypeDef* uartHandle);











#endif


