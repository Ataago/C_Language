//  Prims Algorithm to find Minimum Spanning tree for an undirected graph
//      Start from a Source node and connect to other node forming a tree.
//      connect this tree with the light edge to the other node.
//      Note: This forms a cut in graph.
//      Note: Greedy Algorithm

//  @author Mohammed Ataaur Rahaman
//  School: Dayananda Sagar
//  Date: 22 April, 2018

#include<stdio.h>
#include<conio.h>

int n, costGraph[10][10], totalCost = 0, source, vist[10] = {0}, cost[10], min;
int i, j, cur;

void prims()
{
    for(i = 1; i <= n; i++)                 //cost array shows the cost from source to other nodes
        cost[i] = costGraph[source][i];
    vist[source] = 1;

    for(i = 1; i <= n-1; i++)
    {
        min = 999;
        for(j = 1; j <= n; j++)
            if(!vist[j] && cost[j] < min)       //find the light edge.(minimum in the cost array)
            {
                min = cost[j];
                cur = j;
            }
        vist[cur] = 1;
        totalCost += min;

        for(j = 1; j <= n; j++)         //updating the cost array with new cut edges
            if(!vist[j] && costGraph[cur][j] < cost[j])
                cost[j] = costGraph[cur][j];
    }
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
    printf("Enter the Source Node: ");
    scanf("%d",&source);

    prims();

    if(totalCost >= 999)
        printf("MST does not exists.");
    else
        printf("The Total Cost of MST is: %d",totalCost);
}
