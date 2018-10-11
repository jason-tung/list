#include "listfunct.h"

int main() {
    struct node * jon = insert_front(0,-1);
    printf("--initial linked list with value 5\n");
    print_list(jon);
    for (int i = 0; i < 5; i++){
        jon = insert_front(jon,i);
    }
    printf("--linked list after adding numbers to the front\n");
    print_list(jon);
    printf("--linked list pointer before vs after free\n");
    struct node * kcandy = free_list(jon);
    printf("before: %p and after: %p\n", jon, kcandy);
    //i can't print the list because it will segfault. refer to post on QAF by horace.
    //print_list(jon);
    printf("Hello, World!\n");
    return 0;
}