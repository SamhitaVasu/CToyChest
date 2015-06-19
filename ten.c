#include <stdio.h>

int main()
{
   int n = 0;
   printf("Please enter a number: ");
   scanf("%d", &n);
   int number = 1;
   for(int j = 1; j<=n; j++) //This is a for loop
   {
      number = number*j;
   }
   printf("%d\n", number);
}

// This program uses a for loop to find the factorial of a number of your choice
