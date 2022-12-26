#include "cli_command.h"
#include "gettemp.h"
void cli_command_exc(char* buff, uint8_t len){
       char * pch;
				char *argv[10];
				uint8_t index = 0;
        pch = strtok((char*)buff," ");
        while(pch!=NULL){
						argv[index] = pch;
            pch = strtok(NULL, " ");
						index++;
        }
				if(strcmp((char*)argv[0], "getTemp")==0){
					getTemp(argv, index);
				}
//        else if(strcmp((char*)argv[0], "setTempMax")==0){
//					settempMax((char**)argv, index);
//				}
//        else if(strcmp((char*)argv[0], "getTempMin")==0){
//					settempMin((char**)argv, index);
//				}}
}