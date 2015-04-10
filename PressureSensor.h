#ifndef PROJECT2_PRESSURESENSOR_H
#define PROJECT2_PRESSURESENSOR_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// PressureSensor.h
// Win 7
// Visual C++ 2010
//
#include "Sensor.h"

namespace Project2
{
   //initialize pressure sensor with name and signal
   //source. Member function getUnits returns const 
   //string
   class PressureSensor : public Sensor
   {
   public:
      PressureSensor(string name, Signal &source);
   protected:
      string getUnits() const;
   };
}
#endif //PROJECT2_PRESSURESENSOR_H
