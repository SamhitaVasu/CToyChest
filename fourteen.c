#include <stdio.h>

int main()
{
   int arr[10];
   for( int i=0; i<10; i++ ) 
   { 
      arr[i] = i;  
   } 
   int j = arr[7];
   printf("%d\n", j);
}

// This program uses a for loop to assign the indexes of the array. It then prints out the value of the 7th index of the array
