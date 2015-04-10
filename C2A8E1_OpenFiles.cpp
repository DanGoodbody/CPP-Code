//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A8E1_OpenFiles.cpp
// Win 7
// Visual C++ 2010
//
#include <iostream>
#include <fstream>
#include <cstdlib>

std::ifstream *OpenFiles(char * const fileNames[], size_t count)
{
   //allocate memory for count number of infile objects
   std::ifstream *inFile = new std::ifstream[count];
   //loop through the files and open each with error checking
   for (int files = 0; files < (int)count; files++)
   {
      //open in read mode
      inFile[files].open(fileNames[files], std::ifstream::in);
      //check for good open   
      if (!inFile[files].is_open())
      {
         std::cerr << "File failed to open\n";
         exit(EXIT_FAILURE);
      }
   }
   //return pointer to file array
   return inFile;
}
