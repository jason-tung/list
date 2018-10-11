#include <stdio.h>
#include <stdlib.h>

struct node{ int i; struct node * next;};
void print_list(struct node * hoo);
struct node * insert_front(struct node * old, int newInt);
struct node * free_list(struct node * s);