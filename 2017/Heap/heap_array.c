//Heap using array


#include<stdio.h>
#include<conio.h>
#include<process.h>
int a[100],n,i,root,c,temp;
void createheap(int i)
{
  //if(i==0) //location is zero
   //
  //    root=i;
   //   return;
  //}
  //else
  //{
        c=i;
        while(c)
        {
            root=(c-1)/2;
            if(a[root]<=a[c]) //parent is less than child swap
            {
                temp=a[root];
                a[root]=a[c];
                a[c]=temp;
            }
            c=root;
        }
  //}
}
void display()
{
    printf("Max heap\n ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void main()
{
    int ch;
    for(;;)
    {
        printf("1. create Max Heap\n2. display\n3. exit\n");
        printf("enter ur choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter the number of nodes\n");
                scanf("%d",&n);
                printf("enter the elements\n");
                for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                    createheap(i);
                }
                break;
            case 2:
                display();
                break;
            default:
                exit(0);
        }
    }
}





/*

#include<stdio.h>
#include<time.h>

void heapify(int [], int);
void adjust(int [], int , int);
void hsort(int [], int);
void main()
{
    int a[10], n, i;
     printf("Enter total no: ");
     scanf("%d",%n);
     printf("Enter elements: ");
     for(i=1; i<= n; i++)
        scanf("%d",&a[i]);

     hsort(a,n);
     printf("The sorted elements are: ");
     for(i=1; i<=n; i++)
        printf("%d",a[i]);
}

void hsort(int a[], int n)
{
    int i, t;
    heapify(a,n);
    for(i=n; i>=2; i--)
    {
        t = a[i];
        a[i] = a[1];
        a[1] = t;
        adjust(a,1,i-1);
    }
}
void heapify(int a[], int n )
{
    int i;
    for (i=n/2; i>=1; i--)
        adjust(a,i,n);
}
void adjust(int a[], int i, int n)
{
    int j,v,heap,k;
    k=i;
    v=a[k];
    heap = 0;

    while(!heap && (2*k)<=n)
    {
        j= 2*k;
        if(j<n)
        {
            if(a[j]<a[j+1])
                j=j+1;
        }
        if(v>=a[j])
            heap = 1;
        else
        {
            a[k] = a[j];
            k=j;
        }
    }
    a[k] = v;
}
*/
