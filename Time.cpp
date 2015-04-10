//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 3/9/2015
// Time.cpp
// Win 7
// Visual C++ 2010
//

#include "Time.h"
#include <cmath>
const int MIN_HOUR = 60;
const int SECONDS_HOUR = 3600;
Project2::Time::Time(int hours, int minutes, int seconds)
   : _seconds(seconds + hours * SECONDS_HOUR + minutes * MIN_HOUR)
{}

int 
Project2::Time::getTotalTimeAsSeconds() const
{
   return this->_seconds;
}

int 
Project2::Time::getMinutes(int seconds) const
{
   return (int)(std::floor((double)(seconds / MIN_HOUR))) % MIN_HOUR;
}

int
Project2::Time::getHours(int seconds) const
{
   return (int)(std::floor((double)(seconds / SECONDS_HOUR)));
}

Project2::Time
Project2::Time::operator+=(const Time &rhs)
{   
   this->_seconds += rhs.getTotalTimeAsSeconds();
   return *this;
} 

ostream &
Project2::operator<<(ostream &os, const Time &rhs)
{
    os << rhs.getHours(rhs._seconds) << "h:" << 
      rhs.getMinutes(rhs._seconds) << "m:" <<
      rhs._seconds % MIN_HOUR << "s";

    return os;
}