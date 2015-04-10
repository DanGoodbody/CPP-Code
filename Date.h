//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 1/22/2015
// Date.h
// Win 7
// Visual C++ 2010
// 
#ifndef DANIELGOODBODY_DATE_H
#define DANIELGOODBODY_DATE_H
//represents a date object with day month and year
namespace DanielGoodbody
{
   class Date
   {
   public:
      //Default Constructor will set date to current system date
      Date();
      //date constructor with checks for proper day, month and year
      //will output to cerr if incorrect date values are passed as
      //arguments
      Date(int month, int day, int year);
      //Accesors and Mutators
      inline int getMonth() const;
      void setMonth(int month);
      inline int getDay() const;
      inline int getYear() const;
      //Utility function to display date
      void display();

   private:
      int month_;
      int day_;
      int year_;
   }; 
   //inline functions
   int Date::getMonth() const {return month_;}
   int Date::getDay() const {return day_;}
   int Date::getYear() const {return year_;}
}
#endif //DANIELGOODBODY_DATE_H
