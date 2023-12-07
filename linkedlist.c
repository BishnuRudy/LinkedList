#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    int data;
    struct Node* next;
};

void append( struct Node** linked_list, int data )
{
    struct Node *temp;
    if ( (temp = malloc( sizeof(struct Node)) ) == NULL )
    {
       printf
        (
            "%s : at line %d :: %s\n",
            __FILE__,
            __LINE__,
            "LinkedListNodeCreationError: Failed to createlinked list"
        );
        return;
    }

    temp->data   = data;
    temp->next   = *linked_list;
    *linked_list = temp;
}

int pop ( struct Node** linked_list )
{
    if (*linked_list != NULL)
    {
        struct Node *temp = *linked_list;
        int num = temp->data;

        *linked_list = (*linked_list)->next;

        free(temp);

        return num;
    }
    return INT_MIN;
}

void delete_list( struct Node **linked_list )
{
    while (*linked_list != NULL)
    {
        pop(linked_list);
    }
}

void print_list( struct Node* linked_list)
{
    if (linked_list != NULL)
    {
        struct Node *temp = linked_list;

        while ( temp != NULL )
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
    }
    printf("NULL\n");
}
