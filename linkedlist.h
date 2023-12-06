#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
struct Node;
struct Node *initialize(void);
void append(struct Node **, int);
void pop(struct Node **);
void print_list(struct Node *);
#endif