#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node *next;
    struct node *prev;
}node;

void insert(node **start , int num){
    node *n = (node *)malloc(sizeof(node));
    n->val = num;
    if (*start == NULL){
        n->prev = NULL;
        n->next = NULL;
        *start = n;
        return;
    }
    else{
       struct node * ptr = *start;
        while(ptr->next!= NULL){
            ptr = ptr->next;
        }
        n->prev = ptr;
        n->next = NULL;
        ptr->next = n;
        return;
    }
}
void delete(node **start,int val){
    node *ptr = *start;
    while(ptr->next->val!=val){
        ptr = ptr->next;
    }
    ptr->next = ptr->next->next;
    ptr->next->next->prev = ptr;
    ptr=ptr->next;
    free(ptr);
}