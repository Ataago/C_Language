// Knapsack 0/1 Recursive naive
// Time complexity: O(2^item)

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

int max(int a, int b)
{
    return a > b? a:b;
}
int knapsack(int item, int weightleft)
{
    if (item == 0 || weightleft == 0)
        return 0;
    
    if (sack[WEIGHT][item - 1] <= weightleft)
        return max(sack[PROFIT][item - 1] + knapsack(item - 1, weightleft - sack[WEIGHT][item - 1]), knapsack(item - 1, weightleft));
    else
        return knapsack(item - 1, weightleft);
}
int main()
{
    printf("%d\n", knapsack(ITEMS, CAPACITY));
    return 0;
}
