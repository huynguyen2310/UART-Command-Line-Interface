#include "gettemp.h"
#include "response_ci.h"
#include <lm35.h>
#include <stdlib.h>

void getTemp(char **argv, uint8_t argnum){
	if(argnum < 2){
		response_print("dont enough arg, arg = %d\n", argnum);
		return;
	}
	else if(argnum > 2){
		response_print("too much arg, arg = %d\n", argnum);
		return;
	}
	uint8_t channel = atoi (argv[1]);
//	response_print("Data = %s",argv[1]);
	response_print("Temperature = %f\n", LM35_getTemp(channel));
}