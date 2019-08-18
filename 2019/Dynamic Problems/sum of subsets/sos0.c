// Sum of subsets - Brute force - naive recursion
// Time Complexity: O(2^n)

#include <stdio.h>

#define N 4
#define SUM 5

int set[N] = {6, 3, 2, 1};

int issubsetsum(int n, int sum)
{
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;
    
    if (set[n] <= sum)
        return (issubsetsum(n - 1, sum - set[n - 1]) || issubsetsum(n - 1, sum));
    else
        return issubsetsum(n - 1, sum);
}
int main()
{
    if (issubsetsum(N, SUM))
        printf("TRUE\n");
    else
         printf("FALSE\n");
    return 0;
}
