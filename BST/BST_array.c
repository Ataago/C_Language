//BST using an array
#include<stdio.h>
#include<conio.h>

int a[100], cur;
void bst(int ele)
{
    if(a[0] == NULL)
    {
        a[0]=ele;
        return;
    }
    cur=0;
    while(a[cur] != NULL)
    {
        if(ele < a[cur])
            cur = 2*cur + 1;
        else
            cur = 2*cur + 2;
    }
    a[cur] = ele;
}
void display()
{
    int i;
    printf("BST: ");
    for(i=0; i<100; i++)
    {
        if(a[i] == NULL)
            continue;
        printf("a[%d] = %d \n",i,a[i]);
    }
}
void main()
{
    int ch, i ,n, ele;
    printf("1-BST 2-Display 3- Exit");
    while(1)
    {
        printf("Enter CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                for(i=0; i<100;i++)
                    a[i] = NULL;
                printf("Enter the number of elements: ");
                scanf("%d",&n);
                printf("ENter elements: ");
                for(i=0; i<n; i++)
                {
                    scanf("%d",&ele);
                    bst(ele);
                }
                break;
            case 2:
                display();break;
            case 3:
                exit(0);
        }
    }
}
