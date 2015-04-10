//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A8E1_MergeAndDisplay.cpp
// Win 7
// Visual C++ 2010
// 
#include <iostream>
#include <fstream>
const int INBUF = 511;
//
//Reads one line at a time from each file and outputs
//to the console until all files have reached the end.
//
void MergeAndDisplay(std::ifstream files[], size_t count)
{
   char inbuf[INBUF];
   int filesclosed = 0;
   //loop until all files have been closed
   while (filesclosed != (int)count)
   {
      //loop through each file and output one line
      //if the file is open and not at EOF.
      for (int file = 0; file < (int)count; file++)
      {
         //check for open file and that file is not at EOF
         if (files[file].is_open())
         {
            if (files[file].getline(inbuf, INBUF) != NULL)
            {      
               std::cout << inbuf << '\n';
            }
            else
            {
               //close files at EOF
               files[file].close();
               //increment number of files closed
               filesclosed++;
            }
         }
      }
   }
}
