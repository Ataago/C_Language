
// operations on stack without pointers

#include<stdio.h>
#include<process.h>
#define SIZE 5
int top=-1;
int stack[SIZE];

void main()
{
    void push();
    void pop();
    void display();


    int choice,item;

    while(1)
    {
        printf("\n1-Push\t2-Pop\t3-Print\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid input:");
                exit(0);
        }
    }
}
void push(int item)
{
    if(top==SIZE-1)
        printf("full");
    else
        stack[++top]=item;
}
void pop()
{
    if(top==-1)
        printf("Empty");
    else
        top=top-1;
}
void display()
{
    int i;

    if(top==-1)
        printf("Empty");
    else
        for(i=0;i<=top;i++)
            printf("Element %d is %d\n",i,stack[i]);
}

