#include <Arduino.h>
#include "OneWire.h"
#include "DallasTemperature.h"

#include "ds18b20_arduino.h" 

OneWire* oneWire = 0;
DallasTemperature* sensors = 0;

        
extern "C" void ds18b20IOSetup(uint8_T pin)
{ 
    oneWire = new OneWire(pin);
    sensors = new DallasTemperature(oneWire);
    sensors->begin();
}

extern "C" double readTemperature()
{ 
    sensors->requestTemperatures();
    return (double) sensors->getTempCByIndex(0);
}

extern "C" void release()
{
    delete oneWire;
    delete sensors;
}