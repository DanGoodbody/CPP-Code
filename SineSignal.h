#ifndef PROJECT2_SINESIGNAL_H
#define PROJECT2_SINESIGNAL_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// SineSignal.h
// Win 7
// Visual C++ 2010
//
#include "PeriodicSignal.h"
#include "Time.h"

namespace Project2
{
   //derived class from Signal & Periodic Symbol
   //member function returns voltage at time t
   class SineSignal : public PeriodicSignal
   {
   public:
      SineSignal(double voltageOffset,
         Time timeOffset, double minVoltage,
         double maxVoltage, Time period);
      double getVoltageAtTime(Time t);
   };
}
#endif //PROJECT2_SINESIGNAL_H
