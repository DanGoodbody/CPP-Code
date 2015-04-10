#ifndef PROJECT2_TEMPERATURESENSOR_H
#define PROJECT2_TEMPERATURESENSOR_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// TemperatureSensor.h
// Win 7
// Visual C++ 2010
//
#include "Sensor.h"
namespace Project2
{
   //Derived class from Sensor
   //member function returns units for
   //temp sensor
   class TemperatureSensor : public Sensor
   {
   public:
      TemperatureSensor(string name, Signal &source);
   protected:
      string getUnits() const;
   };
}
#endif //PROJECT2_TEMPERATURESENSOR_H
