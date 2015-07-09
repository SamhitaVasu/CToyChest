#include <stdio.h>

int main()
{
   const int i = 9;
   const float f = 3.14;
   const char c = 'a';
   const char name[10] = "Samhita";
   printf("i is always %d\n", i);
   printf("f is always %f\n", f);
   printf("c is always %c\n", c);
   printf("My name is always %s\n", name);
//   i = 5;
}

//This program shows that you can never change the value of a constant.
//To test this, delete the two slashes of the comment "i = 5;"
// You should get an error when you do that.
//This program also shows that there are various data types that can be defined as a constant. 
