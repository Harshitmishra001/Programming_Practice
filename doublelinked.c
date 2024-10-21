#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node {
    int val;
    struct node* next;
    struct node* prev;
} node;

void insert(struct node** list, int val) {
    node *n = (node*)malloc(sizeof(node));
    if (n == NULL) {
        exit(1);
    }
    n->val = val;
    n->next = NULL;
    n->prev = NULL;
    if (*list == NULL) {
        *list = n;
    } else {
        node *ptr = *list;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = n;
        n->prev = ptr;
    }
}
void specificdeletion(struct node **list,int key){
    struct node *ptr = *list;
    if (*list == NULL){
        return ;
    }  else {
    while (ptr->next->val!=key){
        ptr = ptr->next;
    }
    ptr->next->prev=ptr;
    ptr->next=ptr->next->next;
    return;
    }
}
void printRev(struct node **list){
    struct node *ptr = *list;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node *prev = ptr->prev;
    while(prev!=NULL){
        printf("<-%i",prev->val);
        prev = prev->prev;
    }
    printf("\n");
}
void insertSpecific(struct node **List,int key,int num){
    struct node *ptr = *List;
    while (ptr->val!=key){
        ptr = ptr->next;
    }
    struct node *ptr1=*List;
    struct node *n = (struct node *)malloc(sizeof(struct node));
    ptr->next->prev=n;
    n->val = num;
    n->next=ptr->next;
    n->prev= ptr;
    ptr->next = n;
    }
void print(node *list)
{
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i->",ptr->val);
    }
    printf("NULL\n");
}
int main(int argc, char* argv[]) {
    node *list = NULL;
    for (int i = 0;i<argc;i++){
    int userNumber = atoi(argv[i]);
    insert(&list,userNumber);
    }
    bool flag = true;
    while(flag == true){
    printf("For Insert in list press 1\n");
    printf("For printing list press 2\n");
    printf("To exit press 3\n");
    printf("Enter 4 to insert at specific\n");
    printf("Press 5 to delete at specific\n");
    printf("Press 6 to Print in reverse\n");
        int choice;
        scanf("%i", &choice);

        if (choice == 2)
        {
            print(list);
        }
        else if (choice == 1)
        {
            int num;
        printf("Enter number to enter:");
        scanf("%i",&num);
        insert(&list,num);
        }
        else if (choice == 3)
        {
            flag = false;
        }
        else if (choice  == 4)
        {
            int num;
            int val;
            printf("Enter Value to insert after:");
            scanf("%i",&val);
            printf("Enter num to insert:");
            scanf("%i",&num);
            insertSpecific(&list,val,num);
        }
        else if (choice == 5){
            int num;
            int val;
            printf("Enter Value to insert delete:");
            scanf("%i",&val);
            specificdeletion(&list,val);
        }
        else if (choice==6 ){
            printRev(&list);
        }   
        else{
            printf("Enter correct input");
        }
    }
    print(list);
    return 0;
}