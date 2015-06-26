#include <stdio.h>
 
int main ()
{
   int a = 10;
   do
   {
      if( a == 15)
      {
         a = a + 1;
         continue;
      }
      printf("value of a: %d\n", a);
      a++;
     
   }while( a < 20 );
 
   return 0;
}

//This program uses continue to print out the following values of the integer a: 10-19 (excluding 15)
