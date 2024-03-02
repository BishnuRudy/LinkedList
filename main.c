#include "linkedlist.h"

int main() {
    Node *linkedlist = create_node(0);
    pop(&linkedlist);
    print_list(linkedlist);
    clear_list(&linkedlist);
}