#include <stdio.h>
#include <stdarg.h>

double average(int num,...)
{
   va_list mean;
   double sum = 0.0;
   int i;

   va_start(mean, num);

   for (i = 0; i < num; i++)
   {
      sum += va_arg(mean, int);
   }
   va_end(mean);

   return sum/num;
}

int main()
{
   printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
   printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}

//This program has a variable number of arguments
