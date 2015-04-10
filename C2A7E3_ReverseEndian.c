//
// Daniel Goodbody, U06496728
// GoodbodyDaniel@yahoo.com
// C/C++ Programming II, 104578, Ray Mitchell
// 11/19/2014
// C2A7E3_ReverseEndian.c
// Win 7
// Visual C++ 2010
// 
#include <stdlib.h>
//Reverses bytes for scalar changine "endiness"
void *ReverseEndian(void *ptr, size_t size)
{
   char *start = (char *)ptr;
   char *end = start + size - 1;
   //loop and swap bytes
   for (; end > start; --end, ++start)
   {
      char temp = *start;
      *start = *end;
      *end = temp;
   }
   return ptr;
}
