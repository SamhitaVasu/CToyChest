#include <stdio.h>
#include <string.h>

void swap(int *x, int *y)
{
   *x = *x ^ *y;
   *y = *x ^ *y;
   *x = *x ^ *y;
}

int main()
{
   int num1, num2;
   printf("Choose two numbers: \n");
   scanf("%d %d", &num1, &num2);
   printf("Num1: %d, Num2: %d\n", num1, num2);
   swap(&num1, &num2);
   printf("Num1: %d, Num2: %d\n", num1, num2);
}

//This program uses bitwise to swap the values of two variables without the use of a temporary variable
