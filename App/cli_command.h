#ifndef  CLI_COMMAND_H
#define CLI_COMMAND_H

#include <stdint.h>
#include <string.h>
#include "gettemp.h"
#include "stm32l1xx_hal.h"
void cli_command_exc(char* buff, uint8_t len);

#endif // 