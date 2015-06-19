#include <stdio.h>

int main()
{
   int i = 0;
   printf("Enter an integer: ");
   scanf("%d", &i);
   if (i < 100)
   {
      printf("Your number is too small\n"); //if i is less than 100, it is too small
   }
   else if (i > 1000)   
   {
      printf("Your number is too large\n"); //if i is greater than 1000, it is too large
   }
   else {
      printf("Your number is just right\n"); //if i is in between 100 and 1000, it is just right
   }
}

//This program tells whether the number you chose is too small, too large, or just right
