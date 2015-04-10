#include <iostream>

#include "Array.h"

using namespace DanielGoodbody;
using namespace std;
int main()
{
   //initiate new array
   const int arraySize = 5;
   Array<int, arraySize> arrayOfFiveInts;
   cout << "Display initiated array\n";
   //initialize all array elements to 5 and display
   for (int i = 0; i < arraySize; ++i)
   {
      arrayOfFiveInts[i] = 5;
      cout << arrayOfFiveInts[i] << '\n';
   }
   //create const array using the copy constructor
   const Array<int, arraySize> constArray(arrayOfFiveInts);
   //modify the elements of the int array
   for (int i = 0; i < arraySize; ++i)
      arrayOfFiveInts[i] += 2 * 1;
   //use the assignment operator
   arrayOfFiveInts = constArray;

   //Check all boolean operators
   cout << "check == operator. Should be true\n";
   bool checkit = arrayOfFiveInts == constArray;
   cout << checkit << '\n';

   for (int i = 0; i < arraySize; ++i)
      arrayOfFiveInts[i] += 5;

   cout << "check == operator. Should be false\n";
   checkit = arrayOfFiveInts == constArray;
   cout << checkit << '\n';

   cout << "check != operator. Should be true\n";
   checkit = arrayOfFiveInts != constArray;
   cout << checkit << '\n';

   for (int i = 0; i < arraySize; ++i)
      arrayOfFiveInts[i] += 5;

   cout << "check != operator. Should be false\n";
   arrayOfFiveInts = constArray;
   checkit = arrayOfFiveInts != constArray;
   cout << checkit << '\n';

   cout << "try negative index\n";
   try
   {
      cout << arrayOfFiveInts[-1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

   cout << "try out of range index\n";
   try
   {
      cout << arrayOfFiveInts[arraySize + 1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

   cout << "try negative index\n";
   try
   {
      cout << constArray[-1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

   cout << "try out of range index\n";
   try
   {
      cout << constArray[arraySize + 1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

   cout << "\n\nTest with doubles\n\n";
    //initialize and array o doubles
   Array<double, arraySize> arrayOfFiveDoubles;
   cout << "Display initiated array\n";
   //modify the elements and display
   for (int i = 0; i < arraySize; ++i)
   {
      arrayOfFiveDoubles[i] = 4.25;
      cout << arrayOfFiveDoubles[i] << '\n';
   }
   //declare a const array of doubles
   const Array<double, arraySize> doubleConstArray(arrayOfFiveDoubles);
   //Modify and diaplay the elements of the array
   for (int i = 0; i < arraySize; ++i)
      arrayOfFiveDoubles[i] += 2 * 1;
   arrayOfFiveDoubles = doubleConstArray;

   //check all boolean operators
   cout << "check == operator. Should be true\n";
   checkit = arrayOfFiveDoubles == doubleConstArray;
   cout << checkit << '\n';

   for (int i = 0; i < arraySize; ++i)
      arrayOfFiveDoubles[i] += 5;

   cout << "check == operator. Should be false\n";
   checkit = arrayOfFiveDoubles == doubleConstArray;
   cout << checkit << '\n';

   cout << "check != operator. Should be true\n";
   checkit = arrayOfFiveDoubles != doubleConstArray;
   cout << checkit << '\n';

   for (int i = 0; i < arraySize; ++i)
      arrayOfFiveInts[i] += 5;

   cout << "check != operator. Should be false\n";
   arrayOfFiveDoubles = doubleConstArray;
   checkit = arrayOfFiveDoubles != doubleConstArray;
   cout << checkit << '\n';
   
   cout << "try negative index\n";
   try
   {
      cout << arrayOfFiveDoubles[-1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

   cout << "try out of range index\n";
   try
   {
      cout << arrayOfFiveDoubles[arraySize + 1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

   cout << "try negative index\n";
   try
   {
      cout << doubleConstArray[-1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

   cout << "try out of range index\n";
   try
   {
      cout << doubleConstArray[arraySize + 1];
   }
   catch (exception &e)
   {
      cout << e.what() <<'\n';
   }

}