#include <stdio.h>

int main()
{
   enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
   enum week today;
   today = Wednesday;
   printf("Day %d\n", today+1);
}

// This program tells you the number of the day of the week, Sunday being Day 1
