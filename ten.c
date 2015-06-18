#include <stdio.h>

int main()
{
   int n = 0;
   printf("Please enter a number: ");
   scanf("%d", &n);
   int number = 1;
   for(int j = 1; j<=n; j++)
   {
      number = number*j;
   }
   printf("%d\n", number);
}
