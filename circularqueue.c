#include <stdio.h>

#define MAX 5

struct queue {
    int arr[MAX];
    int front;
    int rear;
};

void insert(struct queue *q, int d) {
    if ((q->rear + 1) % MAX == q->front) {
        q->front = (q->front + 1) % MAX;
    }

    if (q->front == -1) {
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = d;
    printf("Inserted %d\n", d);
}

void delete(struct queue *q) {
    if (q->front == -1) {
        printf("Queue is empty, nothing to delete!\n");
        return;
    }

    printf("Deleted %d\n", q->arr[q->front]);

    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
}

void show(struct queue *q) {
    if (q->front == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->arr[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", q->arr[q->rear]);
}

int main() {
    struct queue q;
    q.front = -1;
    q.rear = -1;

    insert(&q, 10);
    insert(&q, 20);
    insert(&q, 30);
    insert(&q, 40);
    insert(&q, 50);

    show(&q);

    insert(&q, 60);
    insert(&q, 70);
    insert(&q, 80);
    show(&q);
    show(&q);

    return 0;
}