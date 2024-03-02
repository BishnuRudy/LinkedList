#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include "node/node.h"


Node *initialize_list(int data) {
    Node *node = create_node(data);
    return node;
}

void push(Node **list, int data) {
    Node *node = create_node(data);
    node->next = *list;
    *list = node;
}

void insert_at(Node **list, int index, int value) {
    int idx = 0;
    if (index == 0) {
        Node *node = create_node(value);
        node->next = *list;
        (*list)->next = node;
        return;
    }
}

void print_list(Node *list) {
    Node *current = list;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void pop(Node **list) {
    if (!(*list)) return;
    Node *current = *list;
    *list = (*list)->next;
    free(current);
}

void clear_list(Node **list) {
    while (*list != NULL) {
        pop(list);
    }
}