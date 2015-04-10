#ifndef PROJECT2_SENSOR_H
#define PROJECT2_SENSOR_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// Sensor.h
// Win 7
// Visual C++ 2010
//
#include <string>
#include "DataRecorder.h"
#include "Signal.h"

namespace Project2
{
   //Abstact base class for all sensors on the aircraft.
   //AngularSensor, PressureSensor, TemperatureSensor
   //VibrationSensor all inherit this class
   class Sensor
   {
   public:
      //
      Sensor(string name, Signal &source);
      ~Sensor() {}
      //writes all Sensor values to the DataRecorder
      //ostream
      void takeReading(Time t, DataRecorder &recorder);
   protected:
      //virtual function that is overwritten by each
      //individual sensor class
      virtual string getUnits() const = 0;
      //gets sensor name
      string getName() const { return _name; };
      //gets ref to Signal type
      Signal &getSource() const { return _source; };
   private:
      string _name;
      Signal &_source;
   };
}
#endif //PROJECT2_SENSOR_H
