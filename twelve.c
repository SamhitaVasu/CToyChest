#include <stdio.h>

int main()
{
   int n = 0;
   printf("Please enter a number: ");
   scanf("%d", &n);
   int number = 1;
   int j = 1;
   do {
      number = number*j;
      j++;
   }while(j <= n);
   printf("%d\n", number);
}

//This program uses a do while loop to find the factorial of a number of your choice
