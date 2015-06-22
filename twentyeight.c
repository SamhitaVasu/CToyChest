#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
   char c[30];
   struct Node *next;
}s;

s *first = NULL, *last = NULL; //Declare pointers that will later be used

s* push(int val)
{
   s *ptr = (s*)malloc(sizeof(s));
   ptr->c[0] = 'b';
   ptr->next = NULL;
   if(first == NULL)
   {
      first = last = ptr;
      return ptr;
   }
   else
   {
      ptr->next = first;
      first = ptr;
      return ptr;
   }

}

s* pop()
{
   first = first->next;
   return 0;
}

void print_list()
{
    s *ptr = first;
    while(ptr != NULL)
    {
        printf("\n [%s] \n",ptr->c);
        ptr = ptr->next;
    }
    printf("~~~~~~~~~\n");
    return;
}

int main()
{
    int i = 0;
    s *ptr = NULL;
    print_list();
    for(i = 5; i<10; i++)
         push(i);     
    print_list();
    for(i = 8; i<10; i++)
         pop();
    print_list();
    return 0;
}

//This program pushes components into a linked list(s) and then pops a few of the components out of the linked list. Pushing and popping are terms used when making and managing a linked list using a stack, or the LIFO convention.
