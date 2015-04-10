#ifndef PROJECT2_ANGULARSENSOR_H
#define PROJECT2_ANGULARSENSOR_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// AngularSensor.h
// Win 7
// Visual C++ 2010
//
#include "Sensor.h"

namespace Project2
{
   //Represents and AngularSensor with
   //units of radians. Inherits abstract base
   //class Sensor
   class AngularSensor : public Sensor
   {
   public:
      //Constructor
      AngularSensor(string name, Signal &source);      
   protected:
      //get AngularSensor units
      string getUnits() const;
   };
}
#endif //PROJECT2_ANGULARSENSOR_H
