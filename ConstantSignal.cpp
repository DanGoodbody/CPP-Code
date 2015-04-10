//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// ConstantSignal.cpp
// Win 7
// Visual C++ 2010
//
#include "ConstantSignal.h"

Project2::ConstantSignal::ConstantSignal(double voltageOffset, Time timeOffset)
   : Signal(voltageOffset, timeOffset)
   {}

double 

Project2::ConstantSignal::getVoltageAtTime(Time t)
{
   return getVoltageOffset();
}


