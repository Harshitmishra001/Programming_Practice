#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node* next;
} node;

void insert(struct node **start, struct node **last, int num) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->val = num;

    if (*start == NULL) {
        *start = n;
        *last = n;
        n->next = n;
    } else {
        n->next = *start;
        (*last)->next = n;
        *start = n;
    }
}

void insertend(struct node **start, struct node **last, int num) {
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->val = num;

    if (*start == NULL) {
        *start = n;
        *last = n;
        n->next = n;
    } else {
        (*last)->next = n;
        *last = n;
        n->next = *start;
    }
}

void display(struct node **start, struct node **last) {
    struct node *ptr = *start;

    if (*start != NULL) {
        do {
            printf("%d->", ptr->val);
            ptr = ptr->next;
        } while (ptr != *start);
        printf("...\n");
    }
    free(ptr);
}

int main(int argc, char* argv[]) {
    struct node *start = NULL;
    struct node *last = NULL;

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        insert(&start, &last, num);
    }
    int number;
    printf("Enter Number to insert :");
    scanf("%i",&number);
    insertend(&start,&last,number);
    display(&start, &last);
}