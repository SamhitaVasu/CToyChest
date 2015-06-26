#include <stdio.h>
#include <string.h>

int main()
{
   char str1[50] = "Bonjour ";
   char str2[20] = "le Monde ";
   puts(str1);
   puts(str2);
   strcat(str1, str2);
   puts(str1);
   memset(str1, '$', 7);
   puts(str1);
   char str3[50];
   memset(str3, '\0', sizeof(str3));
   strcpy(str3, str1);
   puts(str3);
   puts(str1);
}

//This program uses a various number of string commands, including character arrays, puts, strcat, strcpy, and memset 
