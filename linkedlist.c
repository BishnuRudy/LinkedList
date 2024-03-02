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
    Node *node = create_node(value);
    
    if (index == 0) {
        node->next = *list;
        *list = node;
        return;
    }

    int idx = 0;
    Node *current = *list;
    while (current && idx < index) {
        current = current->next;
        idx++;
    }
    
    if (current->next == NULL) {
        current->next = node;
    } else {
        node->next = current->next;
        current->next = node;
    }
}

void remove_at(Node **list, int index) {
    if (*list == NULL)
        return;
    if (index == 0) {
        pop(list);
        return;
    }

    int idx = 0;
    Node *current = *list;
    Node *prev = NULL;

    while ((current && idx != index)) {
        prev = current;
        current = current->next;
        idx++;
    }
    if (current == NULL) return;
    
    Node *temp = current;
    prev->next = current->next;
    free(temp);
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