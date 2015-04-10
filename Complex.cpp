//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 2/10/2015
// Complex.cpp
// Win 7
// Visual C++ 2010
#include "Complex.h"
using DanielGoodbody::Complex;

Complex::Complex(double real, double imaginary)   
   : real_(real), imaginary_ (imaginary)   
   { }

Complex
Complex::operator+(const Complex &other)
{  
   double realResult = real_ + other.real_;
   double imaginaryResult = imaginary_ + other.imaginary_;
   return Complex(realResult, imaginaryResult);
}

Complex
Complex::operator-(const Complex &other)
{
   double realResult = real_ - other.real_;
   double imaginaryResult = imaginary_ - other.imaginary_;
   return Complex(realResult, imaginaryResult);
}

bool 
Complex::operator==(const Complex &other)
{
   return false;
}

bool 
Complex::operator!=(const Complex &other)
{
   return true;
}

