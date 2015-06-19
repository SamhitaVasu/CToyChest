#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i = 12;
   int *p;
   p = &i;
   printf("i is %d\n", i);
   printf("p is %d\n", *p);
   i = 13;
   printf("i is %d\n", i);
   printf("p is %d\n", *p);
   int *p2;
   p2 = malloc(sizeof(int));
   *p2 = 7; 
   printf("p2 is %d\n", *p2);
   free(p2);
}

//This program uses a pointer and ampersand to change the value of two variables with one line of code
