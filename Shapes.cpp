//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 2/11/2015
// Shapes.cpp
// Win 7
// Visual C++ 2010
// 
#include "Shapes.h"
#include <iostream>
using namespace std;
using namespace DanielGoodbody;

const double PI = 3.14159;
const int CUBE_SIDES = 6;
const double SPHERE_NUMERATOR = 4;
const double SPHERE_DENOMINATOR = 3;


//*****************Circle constructor**************************
Circle::Circle(double radius) : radius_(radius) 
{

}

void 
Circle::display() const
{
   cout << "Circle with radius " << radius_ <<
      " has area " << getArea() << '\n';
}

double 
Circle::getArea() const
{
   return PI * radius_ * radius_;
}

//******************Square constructor*************************
Square::Square(double lengthOfSide) : lengthOfSide_(lengthOfSide)
{

}

void 
Square::display() const
{
   cout << "Square with length of side " <<
   lengthOfSide_ << " has area " << getArea() << '\n';
}

double 
Square::getArea() const
{
   return lengthOfSide_ * lengthOfSide_;
}

//**************Cube implementation code***********************
Cube::Cube(double lengthOfSide) : lengthOfSide_(lengthOfSide)
{

}

void
Cube::display() const
{
   cout << "Cube with length of side " << 
      lengthOfSide_ << " has surface area " << getSurfaceArea() <<
      " and volume " << getVolume() << '\n';
}

double
Cube::getSurfaceArea() const
{
   return lengthOfSide_ * lengthOfSide_ * double(CUBE_SIDES);
}

double
Cube::getVolume() const
{
   return lengthOfSide_ * lengthOfSide_ * lengthOfSide_;
}

//*****************Sphere implementation code**********************
Sphere::Sphere(double radius) : radius_(radius)
{

}
//Display
void
Sphere::display() const
{
   cout << "Sphere with radius " << radius_
      << " has surface area " << getSurfaceArea()
      << " and volume " << getVolume() << '\n';
}
//Sphere surface area
double
Sphere::getSurfaceArea() const
{
   return SPHERE_NUMERATOR * PI * radius_ * radius_;
}

//sphere Volume
double 
Sphere::getVolume() const
{
   return (SPHERE_NUMERATOR / SPHERE_DENOMINATOR) * PI * radius_ * radius_ * radius_;
} 
