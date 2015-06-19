#include <stdio.h>

int month()
{
   int m;
   printf("What month were you born on? Give the number. EG: January = 1:  \n");
   scanf("%d", &m);
   return m;
}

int monthsc()
{
   int a;
   printf("How old are you?  ");
   scanf("%d", &a);
   switch(month())
   {
      case 1 ... 6:
         break;
      case 7 ... 12:
         a++;
         break;
   }
   return a;
}
 
int agesc()
{
   switch(monthsc())
   {
      case 0 ... 3:
         printf("You are not in school yet\n");
         break;
      case 4:
         printf("Enjoy preschool\n");
         break;
      case 5 ... 10:
         printf("Have fun in elementary school\n");
         break;
      case 11 ... 13:
         printf("You are currently a middle schooler\n");
         break;
      case 14 ... 17:
         printf("Good luck in high school\n");
         break;
      default:
         printf("You have already graduated from high school\n");
         break;
   }
   return 0;
}

int main()
{
   agesc();
}

//This program uses switch case to find out what school you are going to this fall (Works only in June unless parameters in case statements of monthsc() are changed)
