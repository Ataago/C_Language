//Queue operations
#include<conio.h>
#include<stdio.h>
#include<process.h>

#define Max 5
int queue[Max];
int front = 0, rear = -1;

void Insert();
void Delete();
void Display();

void main()
{
    int ch;

    printf("Enter Choice for Queue");
    while(1)
    {
        printf("\n\n1-Insert 2-Delete 3-Display 0-Exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Invalid");
                break;
        }
    }
}
void Insert()
{
    if(rear == Max-1)
    {
        printf("Overflow");
        return;
    }
    printf("Enter Element: ");
    scanf("%d",&queue[++rear]);
}
void Delete()
{
    if(front > rear)
    {
        printf("Underflow");
        return;
    }
    printf("Deleted %d",queue[front]);
    front++;
}
void Display()
{
    int i=0;
    if(front > rear)
    {
        printf("Underflow");
        return;
    }
    for(i=front; i<=rear; i++)
        printf("%d ",queue[i]);
}
