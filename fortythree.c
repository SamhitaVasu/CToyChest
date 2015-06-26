#include <stdio.h>
#include <string.h>

union Asdfgh{
   int i;
   float f;
   char str[15];
};

int main()
{
   union Asdfgh asdfgh;
   
   asdfgh.i = 13;
   asdfgh.f = 12.5;
   strcpy(asdfgh.str, "C Toys");
   printf("%d\n", asdfgh.i);
   printf("%f\n", asdfgh.f);
   puts(asdfgh.str);

   asdfgh.i = 13;
   printf("%d\n", asdfgh.i);
     
   asdfgh.f = 12.5;
   printf("%f\n", asdfgh.f);

   strcpy(asdfgh.str, "C Toys");
   puts(asdfgh.str);
}

//This program is an example of a union and shows that a union (unlike a struct) can only hold a valid value for one component at a time
