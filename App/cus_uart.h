#ifndef  UART_H
#define UART_H

#include <stdint.h>
#include "stm32l1xx_hal.h"
void receive_data(uint8_t data_rx);
void uart_handle(void);

#endif // ! UART_H
