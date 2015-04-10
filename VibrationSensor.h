#ifndef PROJECT2_VIBRATIONSENSOR_H
#define PROJECT2_VIBRATIONSENSOR_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// VibrationSensor.h
// Win 7
// Visual C++ 2010
//
#include "Sensor.h"
namespace Project2
{
   //Derived class from Sensor.
   //Member function returns units for
   //vibration sensor
   class VibrationSensor : public Sensor
   {
   public:
      VibrationSensor(string name, Signal &source);
   protected:
      string getUnits() const;
   };
}
#endif //PROJECT2_VIBRATIONSENSOR_H
