#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef struct node{
    int num;
    struct node *next;
}node;
typedef struct Stack
{
    struct Stack *top;
}Stack;
struct Stack* initStack(){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    if (s==NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    s->top = NULL;
    return s;
}
void push(struct Stack *s,int data){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node==NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    new_node->num = data;
    new_node->next = s->top;
    s->top = new_node;

}
bool isEmpty(struct Stack *s){
    if(s->top==NULL){
        return true;
    }
    else{
        return false;
    }
}
void pop(struct Stack *s){
    if(isEmpty(s)==false){
    struct node *temp  = s->top;
    s->top = temp->next;
    free(temp);
    }
    else{
        printf("Stack is Empty......\n");
    }
}
void display(struct Stack *s){
    struct node *sptr = s->top;
    if(isEmpty(s)==false){ 
    while(sptr!=NULL){
        printf("%i -> ",sptr->num);
        sptr=sptr->next;
    }
    printf("NULL\n");
    free(sptr);
    }
    else{
        printf("Stack is Empty......\n");
    }
}
int main(int argc,char *argv[]){
   struct Stack *s = initStack();
    int choice, value;

    while (1) {
        // Display menu options
        printf("\nChoose an operation:\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Display\n");
        printf("4: Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(s, value);
                printf("%d pushed to stack.\n", value);
                break;

            case 2:
                pop(s);
                break;

            case 3:
                printf("Stack contents: \n");
                display(s);
                break;

            case 4:
                printf("Exiting the program.\n");
                exit(0); 

            default:
                printf("Invalid choice! Please choose again.\n");
        }
    }

    return 0;
}
