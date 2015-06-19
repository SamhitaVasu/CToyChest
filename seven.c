#include <stdio.h>

int main() 
{
   int i = 0;
   int cnt = 0;
   printf("PLease enter a number: ");
   scanf("%d",&i);
   printf("PLease enter a loop count: ");
   scanf("%d",&cnt);
   printf("%d\n", i);
   for(int j = 0; j < cnt; j++)
   {
      i++;
   }
   printf("After the ++, i is %d\n", i);
}

// This program takes two integers of your choice and adds them together
