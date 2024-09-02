#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the queue

// Queue structure
struct Queue {
    int items[MAX];
    int front, rear;
};

// Initialize the queue
void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is full
int isFull(struct Queue *q) {
    return (q->rear == MAX - 1);
}

// Check if the queue is empty
int isEmpty(struct Queue *q) {
    return (q->front == -1 || q->front > q->rear);
}

// Enqueue an element
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = value;
    printf("%d enqueued to the queue.\n", value);
}

// Dequeue an element
int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    int item = q->items[q->front];
    q->front++;
    if (q->front > q->rear) { // Reset queue if all elements are dequeued
        initializeQueue(q);
    }
    printf("%d dequeued from the queue.\n", item);
    return item;
}

// Display the queue
void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    struct Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    dequeue(&q);
    display(&q);

    return 0;
}
