#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} node;

typedef struct Queue {
    struct node *front;
    struct node *rear;
} Queue;

struct Queue* insertVal(struct Queue *q, int num) {
    struct node* newNode = (struct node *)malloc(sizeof(struct node));
    newNode->val = num;
    newNode->next = NULL;
    if (q->front == NULL) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    return q;
}

void show(struct Queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
    } else {
        struct node *temp = q->front;
        while (temp != NULL) {
            printf("%d -> ", temp->val);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

struct Queue* deleteVal(struct Queue *q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
    } else {
        struct node* temp = q->front;
        q->front = q->front->next;
        printf("Deleted value: %d\n", temp->val);
        free(temp);
        if (q->front == NULL) {
            q->rear = NULL;
        }
    }
    return q;
}

int main() {
    struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;

    int choice, val;

    while (1) {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Show\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insertVal(queue, val);
                break;
            case 2:
                deleteVal(queue);
                break;
            case 3:
                show(queue);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}