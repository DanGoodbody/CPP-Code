//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// SineSignal.h
// Win 7
// Visual C++ 2010
//
#include <cmath>
#include "SineSignal.h"
using std::sin;
const double PI = 3.14159265358979323846;

Project2::SineSignal::SineSignal(double voltageOffset,
   Time timeOffset, double minVoltage, double maxVoltage, Time period)
   : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
   {}

double
Project2::SineSignal::getVoltageAtTime(Time t)
{
   double seconds = (double)(t.getTotalTimeAsSeconds());
   double offSet = (double)(getTimeOffset().getTotalTimeAsSeconds());
   double period = (double)(getPeriod().getTotalTimeAsSeconds());
   //V(t) = valueOffset + min + (max - min) / 2 +sine((t + timeOffset) * 2 * PI / period) * (max - min) / 2
   return getVoltageOffset() + getMinVoltage() +
      (getMaxVoltage() - getMinVoltage()) / 2 +
      sin((seconds + offSet) * 2 * PI / period)
      * (getMaxVoltage() - getMinVoltage()) / 2;
}