#ifndef PROJECT2_PERIODICSIGNAL_H
#define PROJECT2_PERIODICSIGNAL_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// PeriodicSignal.h
// Win 7
// Visual C++ 2010
//
#include "Signal.h"
#include "Time.h"
namespace Project2
{
   //Abstract class that inherit abstract base
   //class Signal
   class PeriodicSignal : public Signal
   {
   public:
      //Constructor for Periodic Signal such as Sawtooth
      //or Sine wave signals
      //Parameters:
      //volstageOffset: initial voltage
      //timeOffset: signal periodic offset
      //minVoltage: initializes _minValue 
      //maxVoltage: initializes _maxValue
      //period: initializes _period
      PeriodicSignal(double voltageOffset, Time timeOffset,
         double minVoltage, double maxVoltage, Time period);
      //pure virtual function that will be overidden by
      //Sawtooth and Sine signal class member functions
      virtual double getVoltageAtTime(Time t) = 0;
   protected:
      //Getters
      double getMinVoltage() { return _minValue; };
      double getMaxVoltage() { return _maxValue; };
      Time getPeriod() { return _period; }
   private:
      double _minValue;
      double _maxValue;
      Time _period;
   };
}
#endif //PROJECT2_PERIODICSIGNAL_H
