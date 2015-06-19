#include <stdio.h>

int main() 
{
   float f = 0.0;
   printf("PLease enter your speed: ");
   scanf("%f", &f);
      if(f <= 70.0) //This is an if else statement
      {
         printf("You are within the speed limit. Keep it up\n");
      }
      else{
         printf("Too FAST!!!\n");
      }
}

// Based on what speed you enter, this program prints whether or not you are going too fast
