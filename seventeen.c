#include <stdio.h>

int main()
{   
   char month[10];
   month[0] = 'J';
   month[1] = 'u';
   month[2] = 'n';
   month[3] = 'e';
   month[4] = '\0';
   printf("%c %c %c %c \n", month[0], month[1], month[2], month[3]);
   printf("%s\n", month);
}

//This program uses a character array to print a string
