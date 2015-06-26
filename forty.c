#include <stdio.h>
#define BIRTHYEAR 2002

int main()
{
   int cYear, cMonth;
   printf("Enter the current year: ");
   scanf("%d", &cYear);
   printf("Enter the current month number, EG: Jan = 1: ");
   scanf("%d", &cMonth);
   if (cMonth < 10)
   {
      cYear--;
   }
   int age = cYear - BIRTHYEAR;
   printf("Samhita is currently %d years old\n", age);
}

//This program finds my current age by using #define and asking you for the current year and month
