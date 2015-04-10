//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// MonitoringSystem.cpp
// Win 7
// Visual C++ 2010
//
#include <iterator>
#include <string>
#include <vector>
#include "MonitoringSystem.h"

using namespace std;

Project2::MonitoringSystem::MonitoringSystem(ostream &out)
   : _recorder(out)
   {}

//Add pointer to Sensor to _sensors Vector
void
Project2::MonitoringSystem::addSensor(Sensor *s)
{
   _sensors.push_back(s);
}
//loop through all Sensors and take readings
void
Project2::MonitoringSystem::takeReading(Time t)
{
   for (size_t i = 0; i < _sensors.size(); ++i)
      _sensors[i]->takeReading(t, _recorder);
}