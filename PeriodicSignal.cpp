//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// PeriodicSignal.cpp
// Win 7
// Visual C++ 2010
//
#include "PeriodicSignal.h"
#include "Time.h"

Project2::PeriodicSignal::PeriodicSignal(double voltageOffset,
   Time timeOffset, double minVoltage, double maxVoltage, Time period)
   : Signal(voltageOffset, timeOffset), _minValue(minVoltage),
   _maxValue(maxVoltage), _period(period)
   {}


