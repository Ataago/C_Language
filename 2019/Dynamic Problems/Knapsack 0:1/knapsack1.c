// Knapsack using Dynamic programing
// TIme Complexity: O(item * capacity)

#include <stdio.h>

#define ITEMS 3
#define CAPACITY 6
#define WEIGHT 0
#define PROFIT 1

int sack[2][ITEMS] =
{
    { 1,  2,  4},   // weights
    {10, 12, 28}    // profits
};

int knapsack[ITEMS + 1][CAPACITY + 1];

int max(int a, int b)
{
    return a > b? a:b;
}

int main()
{
    for (int i = 0; i <= ITEMS; i++)
    {
        for (int j = 0; j <= CAPACITY; j++)
        {
            if (i == 0 || j == 0)
                knapsack[i][j] = 0;
            else if (sack[WEIGHT][i - 1] <= j)
                knapsack[i][j] = max(sack[PROFIT][i - 1] + knapsack[i - 1][j - sack[WEIGHT][i - 1]], knapsack[i - 1][j]);
            else
                knapsack[i][j] = knapsack[i - 1][j];
        }
    }
    printf("%d\n", knapsack[ITEMS][CAPACITY]);
    
    return 0;
}

