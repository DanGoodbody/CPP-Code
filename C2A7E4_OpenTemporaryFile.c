//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A7E4_OpenTemporaryFile.c
// Win 7
// Visual C++ 2010
// 
#include <stdio.h>
#include <stdlib.h>

FILE *OpenTemporaryFile(void)
{
   FILE *filetoopen = tmpfile();
   if (filetoopen == NULL)
   {
      fputs("Failed to open File!", stderr);
      exit(EXIT_FAILURE);
   }
   //return a pointer to the file
   return filetoopen;
}
