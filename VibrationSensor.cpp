//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// VibrationSensor.cpp
// Win 7
// Visual C++ 2010
//
#include "VibrationSensor.h"
const string VIBRATION_UNITS = "Hertz (Hz)";

Project2::VibrationSensor::VibrationSensor(string name, Signal &source)
   : Sensor(name, source)
{}

string
Project2::VibrationSensor::getUnits() const
{
   return VIBRATION_UNITS;
}