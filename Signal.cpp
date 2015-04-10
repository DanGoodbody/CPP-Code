//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// Signal.cpp
// Win 7
// Visual C++ 2010
//
#include "Signal.h"

Project2::Signal::Signal(double valueOffset, Time timeOffset)
   : _voltageOffset(valueOffset), _timeOffset(timeOffset) 
   {}

double

Project2::Signal::getVoltageOffset()
{
   return _voltageOffset;
}

Project2::Time
Project2::Signal::getTimeOffset()
{
   return _timeOffset;
}