#ifndef PROJECT2_DATARECORDER_H
#define PROJECT2_DATARECORDER_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// DataRecorder.h
// Win 7
// Visual C++ 2010
//
#include <ostream>
#include <string>
#include "Time.h"

namespace Project2
{
   //DataRecorder is used to display all the
   //readings taken from the aircraft sensors
   class DataRecorder
   {
   public:
      DataRecorder(ostream &os);
      //Writes to _out
      void log(Time timeStamp, string sensorName,
         double sensorVoltage, string sensorUnits);
   private:
      ostream &_out;
   };
}
#endif //PROJECT2_DATARECORDER_H
