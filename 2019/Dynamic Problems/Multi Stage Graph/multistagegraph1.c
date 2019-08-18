// Multi Stage Graph Recursive Top down

// NOTE:
//  The nodes in the graph are numbered in ascending order of stages
//  So the source is 0 and the destination is the last node.

// Time complexity O(V^2) or O(E)

#include <stdio.h>
#include <limits.h>

#define I INT_MAX   // Infinity
#define N 8         // Total number of nodes

// Cost Adjaceny matrix
int cost[8][8] =
{
    {I, 1, 2, 5, I, I, I, I},
    {I, I, I, I, 4,11, I, I},
    {I, I, I, I, 9, 5,16, I},
    {I, I, I, I, I, I, 2, I},
    {I, I, I, I, I, I, I,18},
    {I, I, I, I, I, I, I,13},
    {I, I, I, I, I, I, I, 2},
    {I, I, I, I, I, I, I, I}
};

int T[N] = {};

int minPath(int stage, int fromNode)
{
    if (T[fromNode] < I)    // Memoization
        return T[fromNode];
    
    if (fromNode == N - 1)  // Base condition: destination node cost = 0
        T[fromNode] = 0;
    else
    {
        int minCost = I;
        for (int i = fromNode; i < N; i++)
            if (cost[fromNode][i] < I)
                if ((cost[fromNode][i] + minPath(stage + 1, i)) < minCost)
                    minCost = cost[fromNode][i] + minPath(stage + 1, i);
        T[fromNode] = minCost;
    }
    
    return T[fromNode];
}

int main()
{
    // Intialize minimum path array to Infiintiy
    for (int i = 0; i < N; i++)
        T[i] = I;
    
    printf("%d\n", minPath(1, 0));

    return 0;
}

