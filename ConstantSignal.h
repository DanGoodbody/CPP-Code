#ifndef PROJECT2_CONSTANTSIGNAL_H
#define PROJECT2_CONSTANTSIGNAL_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// ConstantSignal.h
// Win 7
// Visual C++ 2010
//
#include "Signal.h"
#include "Time.h"
namespace Project2
{
   //represent a constant electrical signal.
   //inherits abstract base class Signal.
   //Contains calculation for voltage at time t.
   class ConstantSignal : public Signal
   {
   public:
      ConstantSignal(double voltageOffset, Time timeOffset);
      //Voltage calculation for constant signal
      //simply call Signal.getVoltageOffset()
      double getVoltageAtTime(Time t);
   };
}

#endif // PROJECT2_CONSTANTSIGNAL_H
