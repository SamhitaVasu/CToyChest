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
