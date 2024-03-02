#include "node/node.h"

Node *initialize_list(int data);
void push(Node **list, int data);
void pop(Node **list);
void insert_at(Node **list, int index, int value);
void remove_at(Node **list, int index);
void print_list(Node *list);
void clear_list(Node **list);
