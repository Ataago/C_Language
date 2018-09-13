//Floyd's algorithmn

#include<stdio.h>
#include<conio.h>

int i,j,k;

void Floyd(int a[50][50],int n)
{
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(a[i][j] > a[i][k]+a[k][j])
                    a[i][j] = a[i][k]+a[k][j];
}

void main()
{
    int n,a[50][50];
    printf("enter the no. of nodes\n");
    scanf("%d",&n);

    printf("Enter the cost matrix\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);

    Floyd(a,n);
    printf("the modified matrix is\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
