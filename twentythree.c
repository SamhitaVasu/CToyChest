#include <stdio.h>

int main()
{
   int almosteven[3] [3];
   almosteven[0] [0] = 1;
   almosteven[0] [1] = 2;
   almosteven[0] [2] = 4;
   almosteven[1] [0] = 6;
   almosteven[1] [1] = 8;
   almosteven[1] [2] = 10;
   almosteven[2] [0] = 12;
   almosteven[2] [1] = 14;
   almosteven[2] [2] = 16;
   for(int i = 0; i < 3; i++)
   for(int j = 0; j < 3; j++)
   {
      printf("%d\n", almosteven[i] [j]);
   }
}

//This program prints all the values of an array
