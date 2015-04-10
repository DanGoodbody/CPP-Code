//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// SawtoothSignal.cpp
// Win 7
// Visual C++ 2010
//
#include "SawtoothSignal.h"
#include <cmath>

Project2::SawtoothSignal::SawtoothSignal(double voltageOffset,
   Time timeOffset, double minVoltage, double maxVoltage, Time period)
   : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)   
   {}

double
Project2::SawtoothSignal::getVoltageAtTime(Time t)
{
   double seconds = (double)(t.getTotalTimeAsSeconds());
   double offSet = (double)(getTimeOffset().getTotalTimeAsSeconds());
   double period = (double)(getPeriod().getTotalTimeAsSeconds());
   //Formula for calculating sawtooth voltage at time t
   //V(t) = valueOffset + min + ((t + timeOffset) * (max - min) / period) % (max - min)
   return getVoltageOffset() + getMinVoltage() +
      fmod(((seconds + offSet) *
      (getMaxVoltage() - getMinVoltage()) / period),
      (getMaxVoltage() - getMinVoltage()));
}
