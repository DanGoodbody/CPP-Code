//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 1/22/2015
// hw2.cpp
// Win 7
// Visual C++ 2010
// 
// Summary: Test program for Date class and
// and implementation file
#include <iostream>
#include "Date.h"
const int BAD_DAY = 32;
const int BAD_YEAR = -2000;
const int BAD_MONTH = 13;
const int DEF_MONTH_DAY = 1;
const int DEF_YEAR = 2000;

int main()
{
   std::cout << "Default Date\n";
   //call default constructor
   DanielGoodbody::Date date;
   date.display();
   //bad day for given month
   for (int months = 1; months < BAD_MONTH; months++)
   {
   DanielGoodbody::Date badDay(months, BAD_DAY, DEF_YEAR);
   DanielGoodbody::Date badDayNeg(months, -BAD_DAY, DEF_YEAR);
   }
   //bad month
   DanielGoodbody::Date badMonth(BAD_MONTH, DEF_MONTH_DAY, DEF_YEAR);
   DanielGoodbody::Date badMonthNeg(-BAD_MONTH, DEF_MONTH_DAY, DEF_YEAR);
   //bad year
   DanielGoodbody::Date badYear(DEF_MONTH_DAY, DEF_MONTH_DAY, BAD_YEAR);
   //good year
   DanielGoodbody::Date goodYear(DEF_MONTH_DAY, DEF_MONTH_DAY, DEF_YEAR);
   std::cout << "Good Date\n";
   goodYear.display();
}
