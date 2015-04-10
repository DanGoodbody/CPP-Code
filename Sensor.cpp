//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// Sensor.cpp
// Win 7
// Visual C++ 2010
//
#include "Sensor.h"

Project2::Sensor::Sensor(string name, Signal &source)
   : _name(name), _source(source)
   {}
//write message to DataRecorder
void
Project2::Sensor::takeReading(Time t, DataRecorder &recorder)
{    
  double signalVoltage = _source.getVoltageAtTime(t);
  recorder.log(t, _name, signalVoltage, getUnits());
}
