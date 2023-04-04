


#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

int front = -1;
int rear = -1;
int queue[MAX_SIZE];

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = item;
}

int dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return -1;
    }
    int item = queue[front];
    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else {
        front++;
    }
    return item;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d\n", dequeue()); // Output: 10
    printf("%d\n", dequeue()); // Output: 20
    enqueue(40);
    printf("%d\n", dequeue()); // Output: 30
    printf("%d\n", dequeue()); // Output: 40
    printf("%d\n", dequeue()); // Output: Queue Underflow
    return 0;
}
