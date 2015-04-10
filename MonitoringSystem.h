#ifndef PROJECT2_MONITORINGSYSTEM_H
#define PROJECT2_MONITORINGSYSTEM_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// MonitoringSystem.h
// Win 7
// Visual C++ 2010
//
#include <ostream>
#include "DataRecorder.h"
#include "Sensor.h"
#include "Time.h"

namespace Project2
{
   //Represents an aircraft monitoring system
   //with an array of sensors that can be added
   //to and read for a given time
   class MonitoringSystem
   {
   public:
      //Initialize DataRecorder with reference
      //to ostream
      MonitoringSystem(ostream &out);
      //adds the given pointer to a sensor to
      //the vector of Sensor pointers _sensors
      void addSensor(Sensor *s);
      //Gets the readings for all sensors in the
      //_sensors vector. Calls the takeReading member
      //function from the Sensor class at time t
      void takeReading(Time t);
   private:
      DataRecorder _recorder;      
      vector<Sensor *> _sensors;
   };
}
#endif //PROJECT2_MONITORINGSYSTEM_H
