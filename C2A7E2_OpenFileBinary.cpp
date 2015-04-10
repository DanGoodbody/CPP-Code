//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A7E2_OpenFileBinary.cpp
// Win 7
// Visual C++ 2010
// 
#include <iostream>
#include <fstream>
#include <cstdlib>
//Opens a file in binary mode input
void OpenFileBinary(const char *fileName, std::ifstream &inFile)
{
   inFile.open(fileName, std::ifstream::in | std::ifstream::binary);
   //check for good open   
   if (!inFile.is_open())
   {
      std::cerr << "File failed to open\n";
      exit(EXIT_FAILURE);
   }
}
