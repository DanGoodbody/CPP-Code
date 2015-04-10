#include <iostream>
#include "StringUtility.h"


using namespace DanielGoodbody;
using namespace std;

StringUtility::StringUtility()
{
}

string StringUtility::join(const vector<string> &strings, const char delimeter)
{
   string joinedString;
   int length = strings.size();
   for(int i = 0; i < length; ++i)
     joinedString += strings[i] + delimeter;
   return joinedString;
}

vector<string> StringUtility::reverse(const vector<string> &strings)
{
   vector<string> reversed;
   int length = strings.size();
   for(int i = 0; i < length; ++i)
   {
     int indLength = strings[i].length();
     string newString; 
     for (int j = indLength - 1; j > -1; --j)
     {
        char revChar = strings[i][j];  //get individual char from current string position
        newString.push_back(revChar);  //add char to new string
     }
     reversed.push_back(newString);    //add new string to vector
   }
   return reversed;
}

vector<string> StringUtility::combine(const vector<string> &left, const vector<string> &right)
{
   vector<string> combined;
   string newString;
   int leftLength = left.size();
   //loop through left vector 
   for (int leftLoop = 0; leftLoop < leftLength; ++leftLoop)
   {
      //then through right combining the left part with each right
      for (int rightLoop = 0; rightLoop < right.size(); ++rightLoop)
      {
         newString = left[leftLoop] + right[rightLoop];
         combined.push_back(newString);
      }
   }
   return combined;
}

vector<string> StringUtility::leftPad(const vector<string> &strings, const char pad)
{
   int length = strings.size();
   vector<string> leftPadded;
   string padString(1, pad);
   //find longest string
   int longestString = strings[0].length();
   for(int i = 1; i < length; ++i)
   {
      if(strings[i].length() > longestString)
         longestString = strings[i].length();
   }   

  string newString;  
  for(int i = 0; i < length; ++i)
   {
      newString = strings[i];
      for (int currentLength = strings[i].length(); currentLength < longestString; ++currentLength)
      {
         newString.insert(0, padString);
      }
      leftPadded.push_back(newString);
   }
   return leftPadded;
}
