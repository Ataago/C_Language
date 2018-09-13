//  Minimum spanning tree using kruskal's algorithm for undirected graphs.
//      Edges are sorted in ascending order
//      Minimum edge is taken one by one making sure it doesnt form a cycle.
//      Note: Greedy Algorithm

//  @author Mohammed Ataaur Rahaman
//  School: Dayananda Sagar
//  Date: 22 April, 2018

#include<stdio.h>
#include<conio.h>

int parent[20]={0}, min, totalCost = 0, node = 1, n, costGraph[30][30];
int a, b, i, j, u, v;

void kruskal()
{
    while(node < n)
    {
        min = 999;

        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
                if(costGraph[i][j] < min)
                {
                    min = costGraph[i][j];
                    a = u = i;
                    b = v = j;
                }

        while(parent[u])
            u = parent[u];
        while(parent[v])
            v = parent[v];

        if(u != v)
        {
            printf("%d edge of (%d,%d) = %d\n",node++,a,b,min);
            totalCost += min;
            parent[v] = u;      //parent of v is u. i.e. v is child of u.
        }
        costGraph[a][b] = costGraph[b][a] = 999;
    }
    printf("The Total Cost of MST is: %d",totalCost);
}
void main()
{
    printf("Enter number of Nodes:");
    scanf("%d",&n);

    printf("Enter Cost Adjacency Matrix for Undirected Graph:\n");
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
        {
            scanf("%d",&costGraph[i][j]);
            if(costGraph[i][j] == 0)
                costGraph[i][j] = 999;
        }

    kruskal();
}
