#ifndef PROJECT2_SAWTOOTHSIGNAL_H
#define PROJECT2_SAWTOOTHSIGNAL_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// SawtoothSignal.h
// Win 7
// Visual C++ 2010
//
#include "PeriodicSignal.h"
#include "Time.h"
namespace Project2
{
   //Derived class from Signal and Periodic Signal.
   //Contains calculations for getting voltage
   //at a given time.
   class SawtoothSignal : public PeriodicSignal
   {
   public:
      SawtoothSignal(double voltageOffset, Time timeOffset,
         double maxVoltage, double minVoltage, Time period);
      double getVoltageAtTime(Time t);
   };
}
#endif //PROJECT2_SAWTOOTHSIGNAL_H
