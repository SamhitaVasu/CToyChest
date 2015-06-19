#include <stdio.h>

void f(int i)
{
   printf("%d\n", i >= 100 ? 1 : 0);
}

int main()
{
   f(125);
}

//This program uses the ternary operator to print 1 if i is greater than or equal to 100 and 0 otherwise
