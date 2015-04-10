//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A7E2_ListHex.cpp
// Win 7
// Visual C++ 2010
// 
#include <iostream>
#include <fstream>
#include <iomanip>
const int SET_WIDTH = 2;
const int MOD_ZERO = 0;
const int COUNTER = 1;

//Reads through a binary file and outputs bytesperline
//hex numbers to the console
void ListHex(std::ifstream &inFile, int bytesPerLine)
{ 
   //Read through binary file char at a time and 
   //output to console
   int inbuf;
   //set fill and hex output
   std::cout << std::setfill('0') << std::hex;
   for (int counter = COUNTER; (inbuf = inFile.get()) != EOF; counter++)
   {      
      //add newline after bytesPerLine number of ints
      if (counter % bytesPerLine == MOD_ZERO)
         std::cout << std::setw(SET_WIDTH) <<  (unsigned int)inbuf << " " << '\n';
      else
         //ouput in hex with leading zeros
         std::cout << std::setw(SET_WIDTH) <<  (unsigned int)inbuf << " ";
   }
   return;
}
