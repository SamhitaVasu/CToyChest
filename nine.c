#include <stdio.h>

int main()
{
   int i = 0;
   printf("Enter an integer: ");
   scanf("%d", &i);
   if (i < 100)
   {
      printf("Your number is too small\n");
   }
   else if (i > 1000)
   {
      printf("Your number is too large\n");
   }
   else {
      printf("Your number is just right\n");
   }
}
