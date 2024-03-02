#include <stdlib.h>
#include <stdio.h>
#include "node.h"

Node *create_node(int data) 
{
    Node *temp;
    if ( (temp = malloc( sizeof(Node)) ) == NULL )
    {
       printf
        (
            "%s : at line %d :: %s\n",
            __FILE__,
            __LINE__,
            "NodeCreationFail: Failed to createlinked list"
        );
        return NULL;
    }
    temp->data = data;
    temp->next = NULL;
    return temp;
}