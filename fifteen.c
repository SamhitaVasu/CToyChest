#include <stdio.h>

int main()
{
   int arr[10];
   for(int i=0; i<10; i++)
   {
      arr[i] = i;
   }
   int j = 0;
   printf("Choose a number between 1 and 9: ");
   scanf("%d", &j);
   if(j %2 == 0)
   {
      printf("%d is even\n", j);
   }
   else
   {
      printf("%d is odd\n", j);
   }
}

/ This program uses a for loop to assign the indexes of an array. Then, it asks you to choose a value of one of the indexes and it tells you whether it is even.
