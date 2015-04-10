//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A8E2_DisplayModifiedSingleReals.c
// Win 7
// Visual C++ 2010
// 
#include <stdio.h>
#define BUF_SIZE 4
void DisplayModifiedSingleReals(FILE *inFile)
{
   unsigned char bytesIn[4];
   while (fread(bytesIn, BUF_SIZE, 1, inFile) != 0)
   {
      printf("%X %e \n", (unsigned int)bytesIn, (int)bytesIn);
   }
   return;
}
