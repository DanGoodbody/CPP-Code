//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 2/18/2015
// Array.h
// Win 7
// Visual C++ 2010
// 
#ifndef Array_H
#define Array_H
#include<stdexcept>
using namespace std;

namespace DanielGoodbody
{
   template<typename elemType, size_t size>
   class Array
   {
   public:

      ~Array() {}
      Array() {}
      //copy constructor
      Array(const Array<elemType, size> &source) 
      {         
         for (int i = 0; i < size; ++i)
            elements[i] = source.elements[i];         
      }
      //
      Array<elemType, size> &operator=(const Array<elemType, size> &rightSide)
      {
         for (int i = 0; i < size; ++i)
            elements[i] = rightSide.elements[i];
         return *this;
      }
      //boolean == operator
      bool operator==(const Array<elemType, size> &rightSide) const
      {
         for (int i = 0; i < size; ++i)
            if (elements[i] != rightSide.elements[i])
               return false;
         return true;
      }
      //booleand != operator
      bool operator!=(const Array<elemType, size> &rightSide) const
      {
         return !(*this == rightSide);
      }
      //Lvalue subscript operator
      elemType &operator[](const int index) 
      {
         if (index > size - 1 || index < 0)
            throw invalid_argument("Index is out of range of the array.");
         return elements[index];
      }
      //Rvalue subscript operator
      elemType &operator[](const int index) const 
      {
         if (index > size - 1 || index < 0)
            throw invalid_argument("Index is out of range of the array.");
         return (elemType &)elements[index];
      }

   private:
      elemType elements[size];
   };
}
#endif //Array_H
