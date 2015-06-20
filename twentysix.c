nclude <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
}node;

node *head = NULL, *curr = NULL; //Declare pointers that will later be used

node* insert(int val) //Make the linked list
{
    node *ptr = (node *)malloc(sizeof(node));   //Allocate memory for the node pointer ptr
    ptr->val = val;    //Give value for the integer val
    ptr->next = NULL;  //There are no nodes after the node ptr
    if(head == NULL)   //If there is no value in the node head
    {
        head = curr = ptr;  //make one node which all the node pointers point to
        return ptr;
    }
    else
    {
        curr->next = ptr;
        curr = ptr;
        return ptr;
    }
} //The pointer ptr is temporary because it's part of the stack

void print_list()
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("\n [%d] \n",ptr->val);
        ptr = ptr->next;
    }
    return;
}

int main()
{
    int i = 0;
    node *ptr = NULL;
    print_list();
    for(i = 5; i<10; i++)
        insert(i);       //Make five nodes in the linked list
    print_list();
    return 0;
}

//This program makes a linked list and prints it out. The result will be five nodes with identical values but different labels. The first node (head) will point to an unlabled node. That 
//unlabled node will point to another unlabled node and that one to another unlabled node. The fourth node, or third unlabled node in the linked list, will point to the last node, labled curr.
