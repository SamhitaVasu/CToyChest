#include <stdio.h>

int main()
{
   int n = 0;
   printf("Please enter a number: ");
   scanf("%d", &n);
   int number = 1;
   int j = 1;
   while(j <= n) //This is a while loop
   {
      number = number*j;
      j++;
   }
   printf("%d\n", number);
}

// This program uses a while loop to find the factorial of a number of your choice
