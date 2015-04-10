#ifndef PROJECT2_SIGNAL_H
#define PROJECT2_SIGNAL_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// Signal.h
// Win 7
// Visual C++ 2010
//
#include "Time.h"

namespace Project2
{
   //Abstract base class for all signals recieved by the sensors
   //on the monitoring system
   class Signal
   {
   public:
      //Constructor takes parameters:
      //valueOffset: initial voltage
      //timeOffset: periodic time offset for signal
      Signal(double valueOffset, Time timeOffset);
      //Pure virtual function that will be overridden by
      //derived types
      virtual double getVoltageAtTime(Time t) = 0;
   protected:
      double getVoltageOffset();
      Project2::Time getTimeOffset();
   private:
      double _voltageOffset;
      Time _timeOffset;
   };
}

#endif //PROJECT2_SIGNAL_H
