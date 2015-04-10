//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// TemperatureSensor.cpp
// Win 7
// Visual C++ 2010
//
#include "TemperatureSensor.h"
const string TEMPERATURE_UNITS = "Degrees Celsius";

Project2::TemperatureSensor::TemperatureSensor(string name, Signal &source)
   : Sensor(name, source)
{}

string
Project2::TemperatureSensor::getUnits() const
{
   return TEMPERATURE_UNITS;
}
