#include <stdio.h>

int sum(int num1, int num2)
{
   int num3 = num1 + num2;
   return num3;
}

int main()
{
   int (*ptrf) (int, int);
   ptrf = sum;
   int psum = ptrf(10, 3);
   int nsum = sum(10, 3);
   printf("The output with a pointer of 10 + 3 is: %d", psum);  
   printf("The output without a pointer of 10 + 3 is: %d\n", nsum);
}

//This program shows a scenario in which both a pointer to a function and a normal function gives the same output  
