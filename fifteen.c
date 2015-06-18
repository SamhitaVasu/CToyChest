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
