#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

int main()
{
   char letter;
   int i;
   
   fptr = fopen("./file.txt", "w+");
   
   if (fptr == 0)
   {
      printf("There was an error when opening the file.\n");
      exit(1);
   }
   
   fputs("Hello world!\n", fptr);
   
   fputs("Hello universe\n", fptr);
   fclose(fptr);
   return 0;
}

//This program writes a file 
