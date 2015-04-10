//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// PressureSensor.cpp
// Win 7
// Visual C++ 2010
//
#include "PressureSensor.h"
const string PRESSURE_UNITS = "Pounds per square inch (PSI)";

Project2::PressureSensor::PressureSensor(string name, Signal &source)
   : Sensor(name, source)
   {}

string
Project2::PressureSensor::getUnits() const
{
   return PRESSURE_UNITS;
}
