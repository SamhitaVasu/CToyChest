#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  int i;
  int *a = malloc(sizeof(int) * 10);
  if (!a) return -1; /*malloc failed*/
  for (i = 0; i < 11; i++){
    a[i] = i;
  }
  free(a);
  return 0;
}

/* This program has errors that relate to pointers so that we can test valgrind on this file
Valgrind is a debugger that debugs segmentation faults (problems regarding malloc, calloc, freeing, etc)
Before starting, exit the file if you are on one

STEP 1: Type gcc -o fortynine fortynine.c and press enter. If you get any errors, fix them and then continue

STEP 2: Type ./fortynine and press enter. If you get a segmentation fault, continue. Otherwise, you are good to go

STEP 3: Type valgrind ./fortynine and press enter

STEP 4: Read what comes on the screen. If you do not want to read it all, look at the summary and see how many errors occured.
        Then read the notice until you have found out what was wrong with the program and fix it

*/
