//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming III, 105730, Ray Mitchell
// 2/10/2015
// Complex.h
// Win 7
// Visual C++ 2010
#ifndef DANIELGOODBODY_COMPLEX_H
#define DANIELGOODBODY_COMPLEX_H
#include <iostream>
using std::ostream;
using std::istream;

namespace DanielGoodbody
{
   class Complex
   {      
      friend ostream &operator<<(ostream &, const Complex &);
      friend istream &operator>>(istream &, const Complex &);

   public:      
      Complex(double real = 0.0, double imaginary = 0.0);         
      Complex operator+(const Complex &other);
      Complex operator-(const Complex &other);
      bool operator==(const Complex &other);
      bool operator!=(const Complex &other);
      double getReal() const {return real_;};
      double getImaginary() const {return imaginary_;}
      
   private:
      double real_;
      double imaginary_;
   };

   ostream &operator<<(ostream &out, const Complex &cNum)
   {
      out << cNum.real_ << "+" << cNum.imaginary_ << "i\n";
      return out;
   }

   istream &operator>>(istream &in, const Complex &cNum)
   {
      in >> cNum.real_ ;
      in >> cNum.imaginary_;
      return in;
   }
}

#endif //DANIELGOODBODY_COMPLEX_H
