#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct  Node* initialize(void)
{
    struct Node* init_list;
    if ( (init_list = malloc( sizeof(struct Node)) ) == NULL )
    {
        printf
        (
            "%s : at line %d :: %s\n",
            __FILE__,
            __LINE__,
            "LinkedListInitializationError: Failed to initialize linked list"
        );
        return NULL;
    }

    return init_list;
}

void append( struct Node** linked_list, int data )
{
    return;
}

void pop ( struct Node** linked_lists )
{
    return;
}

void print_list( struct Node* linked_list)
{
    struct Node *temp = linked_list;

    while ( temp != NULL )
    {
        temp = temp->next;
    }
}
