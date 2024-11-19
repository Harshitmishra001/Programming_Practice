#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct queue {
    int arr[MAX];
    int front;
    int rear;
} queue;

void insert(struct queue **q, int d) {
    struct queue *que = *q;
    if (que->rear == MAX - 1) {
        printf("Queue is full!\n");
    } else {
        que->rear++;
        que->arr[que->rear] = d;
        if (que->front == -1) {
            que->front = 0;
        }
        printf("Inserted %d\n", d);
    }
}

void delete(struct queue **q) {
    struct queue *que = *q;
    if (que->front == -1) {
        printf("Queue is empty, nothing to delete!\n");
    } else {
        printf("Deleted %d\n", que->arr[que->front]);
        que->front++;
        if (que->front > que->rear) {
            que->front = que->rear = -1;
        }
    }
}

void show(struct queue **q) {
    struct queue *que = *q;
    if (que->front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = que->front; i <= que->rear; i++) {
            printf("%d ", que->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct queue q;
    q.front = -1;
    q.rear = -1;

    struct queue *queuePtr = &q;

    insert(&queuePtr, 10);
    insert(&queuePtr, 20);
    insert(&queuePtr, 30);
    
    show(&queuePtr);
    
    delete(&queuePtr);
    
    show(&queuePtr);
    
    insert(&queuePtr, 40);
    
    show(&queuePtr);

    return 0;
}