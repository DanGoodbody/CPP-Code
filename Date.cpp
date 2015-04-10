//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 1/22/2015
// Date.cpp
// Win 7
// Visual C++ 2010
// Summary: Implemntation file for the Date class
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Date.h"

using namespace std;

const int MONTH_MIN = 1;
const int DAY_MIN = 1;
const int MIN_VALUE = 0;
const int MONTH_MAX = 12;
const int YEAR_OFFSET = 1900;
const int DEF_YEAR = 2000;
const int MONTHS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//Default Constructor sets date to current day
DanielGoodbody::Date::Date()
{   
   //get current system time and convert to localtime 
   //for portability and use the tm struct to get day month year.
   const time_t today = time(0);
   tm *localT = localtime(&today);
   //Set all private members to local date.
   //Need to add an offset to Month and Year to get
   //correct values
   month_ = localT->tm_mon + MONTH_MIN;
   day_ = localT->tm_mday;
   year_ = localT->tm_year + YEAR_OFFSET;
}
//constructor for setDate with checks for valid dates
DanielGoodbody::Date::Date(int month, int day, int year)
{
   if (month < MONTH_MIN || month > MONTH_MAX)
   {
      month_ = MONTH_MIN;
      std::cerr << "Invalid month selection " << month << 
         ". Month must be between " << MONTH_MIN << " and " 
         << MONTH_MAX << ".\n\n";
      return;
   }
   else if (day < MIN_VALUE || day > MONTHS[month - MONTH_MIN])
   {
      day_ = MONTH_MIN;
      std::cerr << "Invalid day selection " << day <<
         " for month " << month << ". Day must be between " <<
         DAY_MIN << " and " << MONTHS[month - MONTH_MIN] << ".\n\n";
      return;
   }
   else if (year < MIN_VALUE)
   {
      year_ = DEF_YEAR;
      std::cerr << "Invalid year selection " << year << 
         ". Year must be greater than zero.\n\n";
      return;
   }
   else
   {
      month_ = month;
      day_ = day;
      year_ = year;
   }
}

//Call all accessors and display date to console
void DanielGoodbody::Date::display()
{
   std::cout << getMonth() << '/' << getDay() << '/' << getYear() << "\n\n";
}
