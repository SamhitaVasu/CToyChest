#include <stdio.h>

int main()
{
   int arr[10];
   int a = 0;
   int b = 0;
   int c = 0;
   int d = 0;
   int e = 0;
   int f = 0;
   int g = 0;
   int h = 0;
   int i = 0;
   int j = 0;
   printf("Pick a number: ");
      scanf("%d", &a);
   printf("Pick another number: \n");
      scanf("%d", &b);
   printf("Pick another number: \n");
      scanf("%d", &c);
   printf("Pick another number: \n");
      scanf("%d", &d);
   printf("Pick another number: \n");
      scanf("%d", &e);
   printf("Pick another number: \n");
      scanf("%d", &f);
   printf("Pick another number: \n");
      scanf("%d", &g);
   printf("Pick another number: \n");
      scanf("%d", &h);
   printf("Pick another number: \n");
      scanf("%d", &i);
   printf("Pick another number: \n");
      scanf("%d", &j);
   arr[0] = a;
   arr[1] = b;
   arr[2] = c;
   arr[3] = d;
   arr[4] = e;
   arr[5] = f;
   arr[6] = g;
   arr[7] = h;
   arr[8] = i;
   arr[9] = j;
   int p = 0;
   int n = 0;
   for(arr[p]; p < 10; p++)
   {
      if(arr[p] %2 == 0)
      {
         n++;
      }
   }
   printf("You picked %d even numbers\n", n);
}
