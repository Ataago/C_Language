// Travelling sales man problem Recursive

#include <stdio.h>
#include <limits.h>

#define I INT_MAX
#define N 4
#define START 0

int cost[N][N] =
    {
        { 0, 10, 15, 20},
        {10,  0, 35, 25},
        {15, 30,  0, 30},
        {10, 25, 30,  0}
    };

int min(int a, int b)
{
    return a < b? a:b;
}
int tsp(int start, int visit[])
{
    int count = 0;
    for (int i = 0; i < N; i++)
        if (visit[i])
            count++;
    
    if (count == N)
        return cost[start][START];
    
    int mincost = I;
    for (int i = 0; i < N; i++)
    {
        if (!visit[i])
        {
            visit[i] = 1;
            mincost = min(cost[start][i] + tsp(i, visit), mincost);
            visit[i] = 0;
        }
    }
    return mincost;
}
int main()
{
    int visit[4];
    for (int i = 0; i < N; i++)
        visit[i] = 0;
    visit[START] = 1;
    
    printf("%d\n", tsp(START, visit));
    return 0;
}

