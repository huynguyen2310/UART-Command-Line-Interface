#include <lm35.h>

float LM35_getTemp(uint8_t channel){
    float temp = 20.5;
    if(channel==0) temp = 30.5;
    else if (channel==1) temp = 35.5;
    return temp;
}