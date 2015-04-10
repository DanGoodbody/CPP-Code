//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 2/10/2015
// hw4.cpp
// Win 7
// Visual C++ 2010
#include <iostream>
using namespace std;
#include "Complex.h"
using DanielGoodbody::Complex;

int main()
{
   Complex newComplex(4.0,5.0);
   operator<<(cout, newComplex);
   Complex leftComplex(2.0,1.0);
   Complex rightComplex(3.0,5.0);
}
