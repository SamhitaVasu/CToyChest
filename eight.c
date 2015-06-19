#include <stdio.h>

void bonjour()
{
   static int j = 0;
   printf("invoking method: bonjour \n");
   j++;
   printf("%d\n", j);
}

int main()
{
   bonjour();
   bonjour();
   bonjour();
   bonjour();
   bonjour();
}

//This program prints the numbers 1, 2, 3, 4, and 5
