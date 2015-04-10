//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// AngularSensor.cpp
// Win 7
// Visual C++ 2010
//
#include <string>
#include "AngularSensor.h"
const string ANGULAR_UNITS = "Radians";

Project2::AngularSensor::AngularSensor(string name, Signal &source)
   : Sensor(name, source)
   {}

string
Project2::AngularSensor::getUnits() const
{
   return ANGULAR_UNITS;
}
