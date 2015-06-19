#include<stdio.h>

int findingi()
{
   int i;
   printf("Choose a number between 1 and 20: ");
   scanf("%d", &i);
   return i;
}

int main()
{
   switch(findingi())
   {
      case 1 ... 9:
         printf("This is a small number\n");
         break;
      case 10 ... 15:
         printf("This is a medium number\n");
         break;
      case 16 ... 20:
         printf("This is a large number\n");
         break;
      default:
         printf("Try again\n");
         break;
   }
}

//This program uses switch case to evaluate a number of your choice 
