//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A7E4_ProcessStructures.c
// Win 7
// Visual C++ 2010
// 
// 1.
#include <stdlib.h>
#include <stdio.h>
#include "C2A7E4_Test-Driver.h"
#define NUM_ONE 1
void *ReverseEndian(void *ptr, size_t size);

struct Test *ReverseMembersEndian(struct Test *ptr)
{
   //initialize pointer to each element
   //of struct test
   double *dptr = (double *)&ptr->dbl;
   float *fptr = (float *)&ptr->flt;
   void *vptr = (void *)&ptr->vp;
   //Call reverse endian for each data type
   ReverseEndian(dptr, sizeof(ptr->dbl));
   ReverseEndian(fptr, sizeof(ptr->flt));
   ReverseEndian(vptr, sizeof(ptr->vp));
   return ptr;
}
//Reads in structures from a temporary file
struct Test *ReadStructures(struct Test *ptr, size_t count, FILE *fp)
{
   int counter;
   struct Test *tpoint = (struct Test *)&ptr;
   //read structures from temp file
   for (counter = 0; counter < (int)count; counter++, tpoint++)
   {
      //read count number of structures from temp file
      if (fread(tpoint, sizeof(ptr), NUM_ONE, fp) != NUM_ONE)
      {
         fputs("Error reading from file!", stderr);
         exit(EXIT_FAILURE);
      }
   }
   return ptr;
}
//Writes structures to a temporary file
struct Test *WriteStructures(const struct Test *ptr, size_t count, FILE *fp)
{
   int counter;
   char *tpoint = (char *)ptr;
   //loop through number of structures and write to temp file
   for (counter = 0; counter < (int)count; counter++, ptr++)
   {
      //write count number of structrues to temp file
      //if write fails exit program
      if (fwrite(tpoint, sizeof(tpoint), NUM_ONE, fp) != NUM_ONE)
      {
         fputs("Error writing to file!", stderr);
         exit(EXIT_FAILURE);
      }
   }
   //return pointer to the structure Test
   return (struct Test *)ptr;
}
