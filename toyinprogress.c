#include <stdio.h>

int main()
{
   int i = 0;
   printf("Please enter your age");
   scanf("%d", &i);
   int age = i;
   printf("age is %d", age);
   return 0;
}
   void hello()
   {
      static int j = 0;
      if (age > 12) 
      {
         age--;
         j--;
         hello();
      }
      else if (age < 12)
      {
         age++;
         j++;
         hello();
      }
      else
      {
         printf("Our age difference is\n");
         printf(j);
         printf("years");
      }
   }

//IN PROGRESS
