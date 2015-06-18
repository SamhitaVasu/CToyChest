#include <stdio.h>

int main() 
{
   float f = 0.0;
   printf("PLease enter your speed: ");
   scanf("%f", &f);
      if(f <= 70.0)
      {
         printf("You are within the speed limit. Keep it up\n");
      }
      else{
         printf("Too FAST!!!\n");
      }
}

