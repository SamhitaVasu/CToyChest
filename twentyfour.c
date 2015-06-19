#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   int x;        
   int *p;      
   p = &x;
   printf("Enter value to be printed: ");   
   scanf( "%d", &x );       
   printf( "%d\n", *p );
}

//This program lets you choose the value of two variables with one button click, using pointers and ampersand
