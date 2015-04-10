#ifndef PROJECT2_TIME_H
#define PROJECT2_TIME_H
//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// Time.h
// Win 7
// Visual C++ 2010
//
#include <ostream>
using namespace std;
namespace Project2
{
   //Time class contains operators for Time objects
   //including compound assignment and stream insertion
   class Time
   {
      //friend function for insertion operator for Time objects
      friend ostream &operator<<(ostream &os, const Time &rhs);
   public:
      //Time Constructor takes parameters hour, minutes
      //and seconds and converts those to total seconds which 
      //are stored in data member _seconds
      Time(int hours, int minutes, int seconds);
      //getters
      int getTotalTimeAsSeconds() const;
      int getMinutes(int seconds) const;
      int getHours(int seconds) const;
      //Compound assignmet operator for Time objects
      Time operator +=(const Time &rhs);

   private:
      int _seconds;
   };
   ostream &operator<<(ostream &os, const Time &rhs);
}


#endif //PROJECT2_TIME_H
