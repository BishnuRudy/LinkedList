#include <stdio.h>
#include "linkedlist.h"

int main()
{
    struct Node *list = NULL;

    for (size_t i = 0; i < 10; i++)
    {
        append(&list, (i + 1));
    }

    print_list(list);
    pop(&list);
    print_list(list);

    delete_list(&list);

    print_list(list);

    return 0;
}
