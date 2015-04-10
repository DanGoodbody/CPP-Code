//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 2/11/2015
// hw5.cpp
// Win 7
// Visual C++ 2010
// 
#include "Shapes.h"
using namespace DanielGoodbody;

int main()
{
   Shapes *pShapes[4];   
   Circle *pCircle = new Circle(1.0);
   Square *pSquare = new Square(1.0);
   Cube *pCube = new Cube(1.0);
   Sphere *pSphere = new Sphere(1.0);
   pShapes[0] = pCircle;
   pShapes[1] = pSquare;
   pShapes[2] = pCube;
   pShapes[3] = pSphere;
   for (int i = 0; i < 4; i++)
   {
      pShapes[i]->display();
      delete pShapes[i];      
   }   
}