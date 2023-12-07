#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H
struct Node;
void append(struct Node **, int);
int pop(struct Node **);
void delete_list( struct Node **linked_list );
void print_list(struct Node *);
#endif
