#include <iostream>
#include "StringUtility.h"
using DanielGoodbody::StringUtility;
using namespace std;

int main()
{
   StringUtility stringTester;  
   vector<string> strings;
   strings.push_back("The");
   strings.push_back("quick");
   strings.push_back("brown");
   strings.push_back("fox");
   strings.push_back("jumps");
   strings.push_back("over");
   strings.push_back("the");
   strings.push_back("lazy");
   strings.push_back("dog");   

   cout << "Test join with delimeter (,)\n";
   const char delimeter(',');
   cout << stringTester.join(strings,delimeter) << '\n';

   cout << "\nTest reverse function\n";
   vector<string> reverseStrings = stringTester.reverse(strings);
   for (vector<string>::iterator iter = reverseStrings.begin(); iter != reverseStrings.end(); ++iter)
      cout << *iter << " ";
   cout << '\n';

   cout << "\nTest combine function\n";
   vector<string> left;
   left.push_back("Mr.");
   left.push_back("Mrs.");
   vector<string> right;
   right.push_back("Jones"); //, "Smith", "Williams");
   right.push_back("Smith");
   right.push_back("Williams");
   //output new vector
   vector<string> combineStrings = stringTester.combine(left, right);
    for (vector<string>::iterator iter = combineStrings.begin(); iter != combineStrings.end(); ++iter)
      cout << *iter << " ";
   cout << '\n';

   //Test leftPad function with the strings vector form above
   cout << "\nTest leftPad function with delimeter (*)\n";
   vector<string> padStrings = stringTester.leftPad(strings, '*');
   for (vector<string>::iterator iter = padStrings.begin(); iter != padStrings.end(); ++iter)
      cout << *iter << " ";
}
