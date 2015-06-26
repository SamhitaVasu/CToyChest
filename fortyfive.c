#include <stdio.h>
#include "swap.h"


int main()
{
   int num1, num2;
   printf("Choose two numbers: \n");
   scanf("%d %d", &num1, &num2);
   printf("Num1: %d, Num2: %d\n", num1, num2);
   swap(&num1, &num2);
   printf("Num1: %d, Num2: %d\n", num1, num2);
}

//This program uses a library called swap.h to swap the values of two variables. to run this program, you need swap.c and swap.h, and you need to type: gcc -o fortyfive  swap.c fortyfive.c -I
//After typing that and pressing enter, type: ./fortyfive
