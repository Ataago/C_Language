//Queue operations
#include<conio.h>
#include<stdio.h>
#include<process.h>

#define Max 4
int queue[Max];
int front = 0, rear = -1, c=0;

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
    if(c == Max)
    {
        printf("Overflow");
        return;
    }
    printf("Enter Element: ");
    rear = (rear + 1) % Max;
    scanf("%d",&queue[rear]);
    c++;
}
void Delete()
{
    if(c == 0)
    {
        printf("Underflow");
        return;
    }
    printf("Deleted %d",queue[front]);
    front = (front + 1) % Max;
    c--;
}
void Display()
{
    int i,ptr;
    if(c == 0)
    {
        printf("Underflow");
        return;
    }
    ptr = front;
    for(i=1; i<=c; i++)
    {
        printf("%d ",queue[ptr]);
        ptr = (ptr + 1) % Max;
    }
}

