#ifndef STRINGUTILITY_H
#define STRINGUTILITY_H

#include <string>
#include <vector>
using namespace std;
namespace DanielGoodbody
{
   class StringUtility
   {
   public:
      //Default Constructor
      StringUtility();
      //join two strings together with a specified delimeter in between.
      //returns a string
      string join(const vector<string> &strings, const char delimeter);
      //returns a vector of strings with each string reversed
      vector<string> reverse(const vector<string> &strings);
      //Retursn as vector that is the combination of two vectors
      vector<string> combine(const vector<string> &left, const vector<string> &right);
      //return a vector containing each string from the strings parameter left-padded with the pad
      //character so that each resulting string has a length equal to the longest original string.
      vector<string> leftPad(const vector<string> &strings, const char pad);
   
   };
}
#endif //STRINGUTILITY_H
