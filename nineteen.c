#include <stdio.h> 
#include <string.h> 

int main()
{
   struct address
   {
      int street_number;
      char street[15];
      char city[20];
      int zip;
      char state_abb[3];
      float house_value;
   };
   struct address a;
   a.street_number = 109;
   strcpy(a.street,"Cherry Lane");
   strcpy(a.city, "Berryville");
   a.zip = 92104;
   strcpy(a.state_abb, "VA");
   a.house_value = 650852.64;
   printf("%d %s %s %d %s %.2f \n", a.street_number, a.street, a.city, a.zip, a.state_abb, a.house_value);
}
 
//This program prints out all the members of a structure  
