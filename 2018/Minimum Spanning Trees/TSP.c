//  Travelling Sales Person. Find the optimal solution and compare with other approximation algorithm.
//  Given a set of cities and dist. bw every pair of cities, the problem is to find
//  the shortest possible route that visits every city exactly once and returns to the starting point
//      We find the permutation of all possible paths (n-1)!.
//      the minimum cost among them is the optimal solution.
//      Note: Dynamically we can compute all permutations and its minimum cost recursively

//  @author Mohammed Ataaur Rahaman
//  School: Dayananda Sagar
//  Date: 22 April, 2018

#include<stdio.h>
#include<conio.h>

int n, cost[10][10], start;

int tspNn(int source, int v[])
{
    int sum=0, min=0, cur, i,j;

    printf("TSP Solution using Nearest neighbour:\n\n");
    printf("Path : %5d",source);

    for(i = 1; i <= n-1; i++)
    {
        v[source] = 1;
        min = 999;
        for(j = 1; j <= n; j++)
        {
            if(cost[source][j] < min && v[j] == 0 && source != j)
            {
                min = cost[source][j];
                cur = j;
            }
        }
        sum += min;
        printf(" --> %5d",cur);
        source = cur;
    }

    sum += cost[cur][start];
    printf(" --> %5d\n\n",start);

    return sum;
}
int tspDp(int source, int vist[])
{
    int sum;

    vist[source] = 1;			//mark source node as visited
    sum = g(source,vist);  		//get optimal path cost

    return sum;
}
int g(int cur, int vist[])
{
    int i,sum,min;

    if(visitedAll(vist))            //Base Condition.. if visted all city
        return cost[cur][start];

    min = 999;
    for(i = 1; i <= n; i++)
    {
        if(vist[i] == 0) 		 	//If node k already visited then ignore
        {
            vist[i] = 1;

            sum = cost[cur][i] + g(i,vist);
            if(sum < min)
                min = sum;

            vist[i] = 0;
        }
    }
    return min;
}
int visitedAll(int vist[])
{
    int i;
    for(i = 1; i <= n; i++)
        if(vist[i] == 0)
            return 0;
    return 1;
}

void main()
{
    int vist[10] = {0},i,j, minCost1, minCost2;

    printf("Enter the Number of Cities: ");
    scanf("%d",&n);

    printf("Enter Cost Adjacency Matrix :\n");
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            scanf("%d",&cost[i][j]);

    printf("Enter Source: ");
    scanf("%d",&start);

    minCost1 = tspNn(start,vist);

    for(i = 1; i <= n; i++)
        vist[i] = 0;

    minCost2 = tspDp(start,vist);

    printf("\n\nCost using NN = %5d\n\n",minCost1);
    printf("\n\nCost using DP = %5d\n\n",minCost2);
    printf("Deviation: %f\n\n",(float)minCost1/minCost2);
}
