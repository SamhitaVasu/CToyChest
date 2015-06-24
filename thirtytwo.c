#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
   char fileLine[100]= "Hello world!";
   fptr = fopen("./file1.txt", "r+");
   
   if (fptr != 0)
   {
      while (!feof(fptr))
      {
         fgets(fileLine, 100, fptr);
         if (!feof(fptr))
         {
            puts(fileLine);
         } 
      }
   }
   else
   {
      printf("ERROR: File not found\n");
   }
   fclose(fptr);
   return 0;
}
