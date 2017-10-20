#include<stdio.h>
 void sort(int a[], int n)
 {
    int c[100]={0},b[100],i;
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(i=1; i<100; i++)
    {
        c[i] = c[i] + c[i-1];
    }

    for(i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
void main()
{
    int a[]={8,6,5,3,2};
    int n=5,i;
    printf("enter array\n");
    sort(a,n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}

