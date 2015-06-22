#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
   char c[30];
   struct Node *next;
}s;

s *first = NULL, *last = NULL; //Declare pointers that will later be used

s* enq(int val)
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
      last->next = ptr;
      last = ptr;
      return ptr;
   }

}

s* deq()
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
    printf("~~~~~~~~~");
    return;
}

int main()
{
    int i = 0;
    s *ptr = NULL;
    print_list();
    for(i = 5; i<10; i++)
         enq(i);       
    print_list();
    for(i = 8; i<10; i++)
         deq();
    print_list();
    return 0;
}

//This program enqueues components of a linked list and then dequeues some components, printing both versions of the linked list. Enqueue and dequeue are terms used when making and managing a linked list using a queue, or the FIFO convention.
