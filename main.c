#include <stdio.h>
#include "linkedlist.h"

int main() {
    Node *linkedlist = NULL;
    for (int i  = 0;  i < 10; i++) {
        push(&linkedlist, (i * 2));
    }
    pop(&linkedlist);
    insert_at(&linkedlist, 4, -10);
    remove_at(&linkedlist, 2);
    remove_at(&linkedlist, 8); 
    print_list(linkedlist);
    clear_list(&linkedlist);
}