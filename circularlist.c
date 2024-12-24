//Harshit Mishra 23bai10473
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
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

void display(struct node **start) {
    struct node *ptr = *start;

    if (*start != NULL) {
        do {
            printf("%d->", ptr->val);
            ptr = ptr->next;
        } while (ptr != *start);
        printf("...\n");
    } else {
        printf("List is empty!\n");
    }
}

void deleteStartNode(struct node **start, struct node **last) {
    if (*start == NULL) {
        return;
    }
    struct node *temp = *start;
    if (*start == *last) {
        *start = NULL;
        *last = NULL;
        free(temp);
        return;
    }
    *start = (*start)->next;
    (*last)->next = *start;
    free(temp);
}
int main() {
    struct node *start = NULL;
    struct node *last = NULL;
    int choice, num;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at start\n");
        printf("2. Insert at end\n");
        printf("3. Display list\n");
        printf("4. Delete the start node\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number to insert at start: ");
                scanf("%d", &num);
                insert(&start, &last, num);
                break;
            case 2:
                printf("Enter a number to insert at end: ");
                scanf("%d", &num);
                insertend(&start, &last, num);
                break;
            case 3:
                printf("Current Circular Linked List:\n");
                display(&start);
                break;
            case 4:
                deleteStartNode(&start, &last);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
/*@Harshitmishra001 ➜ /workspaces/Programming_Practice (main) $ ./circularlist

Menu:
1. Insert at start
2. Insert at end
3. Display list
4. Delete the start node
5. Exit
Enter your choice: 1
Enter a number to insert at start: 12

Menu:
1. Insert at start
2. Insert at end
3. Display list
4. Delete the start node
5. Exit
Enter your choice: 1
Enter a number to insert at start: 23

Menu:
1. Insert at start
2. Insert at end
3. Display list
4. Delete the start node
5. Exit
Enter your choice: 2
Enter a number to insert at end: 34

Menu:
1. Insert at start
2. Insert at end
3. Display list
4. Delete the start node
5. Exit
Enter your choice: 1
Enter a number to insert at start: 45

Menu:
1. Insert at start
2. Insert at end
3. Display list
4. Delete the start node
5. Exit
Enter your choice: 3
Current Circular Linked List:
45->23->12->34->...*/