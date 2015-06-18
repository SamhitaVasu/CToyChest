#include <stdio.h>

int main()
{
   enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
   enum week today;
   today = Wednesday;
   printf("Day %d\n", today+1);
}
