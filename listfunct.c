#include "listfunct.h"

void print_list(struct node * hoo){
    while(hoo) {
        printf("linked list at %p with value %d\n", hoo, hoo->i);
        hoo = hoo->next;
    }
}

struct node * insert_front(struct node * old, int newInt){
    struct node *new = malloc(sizeof(struct node));
    new->i = newInt;
    new->next = old;
    return new;
}

struct node * free_list(struct node * s){
    struct node * wait;
    struct node * c = s;
    while(s){
        wait = s;
        s = s->next;
        free(wait);
    }
    return c;
}

