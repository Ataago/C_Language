#include<stdio.h>
#include<conio.h>

int knpsk ( int ,int ,int[20], int[20], int[20][100]);
void optn ( int ,int,int[20],int[20],int[20][100]);
int max( int, int);

int main()
{
    int weight[20],value[20],n,maxWeight,i,j,maxValue,a[10][100];

    printf("Enter the no. of items: ");
    scanf("%d",&n);

    printf("Enter the capacity of the KNAPSACK: ");
    scanf("%d",&maxWeight);

    printf("Enter the value of each item: ");
    for(i=1;i<=n;i++)
        scanf("%d",&value[i]);

    printf("Enter the weight of each item: ");
    for(i=1;i<=n;i++)
        scanf("%d",&weight[i]);

    maxValue=knpsk(n,maxWeight,weight,value,a);

    printf("Solution of the KNAPSACK problem is \n");
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=maxWeight;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }


    printf("The maximum profit is %d:\n",maxValue);
    printf("The option selected are :\n");
    optn(n,maxWeight,weight,value,a);

    getch();
    return 0;

}

int knpsk (int n, int maxWeight, int weight[], int value[], int a[][100])
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=maxWeight;j++)
        {
            if(i==0 || j==0)
                a[i][j]=0;
            else if(weight[i] > j)
                a[i][j]= a[i-1][j];
            else
                a[i][j] = max( a[i-1][j], value[i] + a [i-1] [j-weight[i]] );
        }
    }
    return (a[n][maxWeight]);
}

void optn (int n,int maxWeight,int weight[],int value[], int a[][100])
{
    int i=n,  j=maxWeight;

    while((i != 0) && (j != 0))
    {
        if( a[i][j] !=  a[i-1][j] )
        {
            printf("Value: %d Weight: %d\n",value[i],weight[i]);
            j = j - weight[i];
            i--;
        }
        else
            i--;
    }
}

int max ( int a, int b)
{
    return((a>b)?a:b);
}
