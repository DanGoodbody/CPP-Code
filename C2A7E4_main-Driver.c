#define INSTRUCTOR_FILE /* DO NOT DEFINE THIS MACRO IN ANY FILES YOU CREATE */

/******************** DO NOT MODIFY THIS FILE IN ANY WAY ********************/
/******************** DO NOT MODIFY THIS FILE IN ANY WAY ********************/
/******************** DO NOT MODIFY THIS FILE IN ANY WAY ********************/

/****************************************************************************
 * Everything in this file was written to help test/verify your code and must
 * not be altered in any way.  Do not rename this file or copy anything from
 * it into your file(s).  This file does not necessarily represent good coding
 * technique, proper formatting/style, or meet the requirements your code must
 * meet.  You do not need to understand the code in this file to write yours.
 ***************************************************************************/
#ifdef INSTRUCTOR_FILE

#include <stdio.h>
#include <stdlib.h>

#include "C2A7E4_Test-Driver.h"

FILE *OpenTemporaryFile(void);
struct Test *ReverseMembersEndian(struct Test *ptr);
struct Test *ReadStructures(struct Test *ptr, size_t count, FILE *fp);
struct Test *WriteStructures(const struct Test *ptr, size_t count, FILE *fp);

#define Elements(array) (sizeof(array)/sizeof((array)[0]))

typedef unsigned char UChar;

int main(void)
{
   UChar *cp;
   size_t elemNo, byteNo;
   FILE *temporaryFile;
   
   struct Test x[] =                      /* an array of structures */
   {                                      /* declare and initialize */
      {23.6F, -425e-6, (void *)0x2345},   /* structure 0 */
      {2, 1, 0},                          /* structure 1 */
      {-6, 3.3, NULL}                     /* structure 2 */
   };

   struct Test y[Elements(x)];            /* an array of structures */

   /* file for unaltered structures */
   temporaryFile = OpenTemporaryFile();
   /* write multiple structures */
   WriteStructures(x, Elements(x), temporaryFile);
   /* back to beginning */
   rewind(temporaryFile);
   /* read multiple structures */
   ReadStructures(y, Elements(y), temporaryFile);
   fclose(temporaryFile);
   printf("\n");

   /* Print bytes in structures before & after reversal. */
   printf("Structure bytes before (1st line) & after (2nd line) reversal:\n\n");
   for (elemNo = 0; elemNo < Elements(x); ++elemNo, putchar('\n'))
   {
      y[elemNo] = x[elemNo];
      ReverseMembersEndian(&y[elemNo]);
      printf("Element %d:\n", (int)elemNo);
      printf("  ");
      cp = (UChar *)&x[elemNo];
      for (byteNo = 0; byteNo < sizeof(*x); ++byteNo)
         printf(" %02x", cp[byteNo]);
      printf("\n  ");
      cp = (UChar *)&y[elemNo];
      for (byteNo = 0; byteNo < sizeof(*y); ++byteNo)
         printf(" %02x", cp[byteNo]);
   }
   printf("\n\n"
      "PLEASE BE SURE YOU HAVE ANSWERED THE FOLLOWING QUESTIONS:\n"
      "   1. Were the results you got correct for your implemenation?\n"
      "   2. How many padding bytes were in your structure?\n\n");

   return EXIT_SUCCESS;
}
#endif
