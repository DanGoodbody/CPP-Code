//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// DataRecorder.cpp
// Win 7
// Visual C++ 2010
//
#include <iomanip>
#include "DataRecorder.h"

Project2::DataRecorder::DataRecorder(ostream &os)
   : _out(os) 
   {}

void
Project2::DataRecorder::log(Time timeStamp, string sensorName,
   double sensorVoltage, string sensorUnits)
{  
      // Format floating point numbers to always display 2 digits to right of
      // decimal point
      _out << std::fixed << std::setprecision(2)
         << timeStamp << " - "
         << sensorName << " - "
         << sensorVoltage << " "
         << sensorUnits << endl; 
}
