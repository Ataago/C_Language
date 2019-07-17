// Circular Queue using arrays

#include <stdio.h>

#define MAX 4

int queue[MAX];
int front = 0, rear = 0;

void enqueue(int item)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Overflow\n");
        return;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = item;
}

int dequeue()
{
    if (front == rear)
    {
        printf("Empty Queue\n");
        return -999999;
    }
    front = (front + 1) % MAX;
    return queue[front];
}

void display()
{
    if (front != rear)
    {
        int i = front;
        do
        {
            i = (i + 1) % MAX;
            printf("%d ", queue[i]);
        }while(i != rear);
    }
    else
        printf("queue is empty");
    printf("\n");
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    
    display();
    enqueue(4);
    display();    printf("Dequeded: %d\n", dequeue());

    enqueue(5);
    display();
    
    printf("Dequeded: %d\n", dequeue());
     printf("Dequeded: %d\n", dequeue());
     printf("Dequeded: %d\n", dequeue());
    
    display();
    enqueue(8);
    display();
    
    enqueue(9);
    enqueue(10);
    display();
    enqueue(11);
    display();
    dequeue();
    display();
    
    return 0;
}
