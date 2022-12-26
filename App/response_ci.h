#ifndef  RESPONSE_CI_H
#define RESPONSE_CI_H

#include "stm32l1xx_hal.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
void response_print(const char* str, ...);
void response_init(UART_HandleTypeDef *huart_print);
#endif