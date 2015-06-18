#include <stdio.h>

int main()
{
   char a[10] = "Samhita ";
   char b[10] = "Vasu";
   char c[30];
   int i = 0;
   while(a[i] != '\0')
   {
      c[i] = a[i];
      i++;
   }
   int j = 0;
   while(b[j] != '\0')
   {
      c[i++] = b[j++];
   }
   c[i] = '\0';
   printf("%s\n", c);
}
