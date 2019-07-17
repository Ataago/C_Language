// Queue using array

#include <stdio.h>

#define MAX 2


int front = 0, rear = -1;
int queue[MAX];

// Insert an item in queue
void enqueue(int item)
{
    if (rear == MAX - 1)    // queue is full
    {
        printf("overflow\n");
        return;
    }
    queue[++rear] = item;
}

// Delete an item from queue
int dequeue()
{
    if (front > rear)   // queue is empty
    {
        printf("queue is empty\n");
        return -99999;
    }
    return queue[front++];
}

// Display queue
void display()
{
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    printf("Dequeded: %d\n", dequeue());
    display();
    return 0;
}
