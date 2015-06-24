#include <stdio.h>

int main()
{
   int a = 10;
   printf("a is %d\n", a);
   int b = 100;
   printf("b is %d\n", b);
   int temp = a;
   a = b;
   b = temp;
   printf("a is %d\n", a);
   printf("b is %d\n", b);
}

//This program switches the value of two integers, using a temporary variable
