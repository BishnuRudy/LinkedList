#ifndef _NODE_H
#define _NODE_H
typedef struct NODE
{
    int data;
    struct NODE* next;
} Node;
Node *create_node(int);
#endif