//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 2/11/2015
// Shapes.h
// Win 7
// Visual C++ 2010
// 
#include <iostream>
using std::cout;
using std::cerr;

namespace DanielGoodbody
{
   
   //base class
   class Shapes
   {
   public:
      virtual void display() const = 0;    
   };
   //class for two dimensional shapes
   class TwoDimensionalShape : public Shapes
   {
   public:
      virtual double getArea() const = 0;
   };
   //class for three dimensional shapes
   class ThreeDimensionalShape : public Shapes
   {
   public:
      virtual double getSurfaceArea() const = 0;
      virtual double getVolume() const = 0;
   };
   //Represents a Circle with a given radius.
   //will display radius and the area of the circle 
   class Circle : public TwoDimensionalShape
   {
   public:      
      Circle(double radius);
      void display() const;
      double getArea() const;      

   private:
      double radius_;
   };
   //Represents a square object with given edge length
   class Square : public TwoDimensionalShape
   {
   public:

      Square(double lengthOfSide); 
      void display() const;
      double getArea() const;
     
   private:
      double lengthOfSide_;
   };
   //Represents a sphere object with given radius
   class Sphere : public ThreeDimensionalShape
   {
   public:

      Sphere(double radius);
      void display() const;
      double getSurfaceArea() const;
      double getVolume() const;

   private:
      double radius_;
   };

   class Cube : public ThreeDimensionalShape
   {
   public:

      Cube(double lengthOfSide);
      void display() const;
      double getSurfaceArea() const;
      double getVolume() const;

   private:
      double lengthOfSide_;
   };

}
