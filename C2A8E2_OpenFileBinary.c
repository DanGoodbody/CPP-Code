//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A8E2_OpenFileBinary.c
// Win 7
// Visual C++ 2010
//
#include <stdio.h>
#include <stdlib.h>

FILE *OpenFileBinary(const char *fileName)
{
   //pointer to file to be opened
   FILE *fp;
   fp = fopen(fileName, "rb");
   //check for good open
   if (fp == NULL)
   {
      fputs("Failed to open File!", stderr);
      exit(EXIT_FAILURE);
   }
   //return a pointer to the file
   return fp;
}
