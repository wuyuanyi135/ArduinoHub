#ifndef _DS18B20_ARDUINO_H_
#define _DS18B20_ARDUINO_H_
#include "rtwtypes.h"


#ifdef __cplusplus
extern "C" {
#endif
    
void ds18b20IOSetup(uint8_T pin);
double readTemperature();
void release();
#ifdef __cplusplus
}
#endif
#endif //_DS18B20_ARDUINO_H_