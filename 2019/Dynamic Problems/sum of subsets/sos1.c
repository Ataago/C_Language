// Sum of subsets - Bottom up Recursive (dynamic Programming)
// Time Complexity: O(n * sum)

#include <stdio.h>

#define N 4
#define SUM 10

int set[N] = {6, 3, 2, 1};
int sos[N + 1][SUM + 1];

int main()
{
    
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= SUM; j++)
        {
            if (j == 0)
                sos[i][j] = 1;
            else if (i == 0)
                sos[i][j] = 0;
            
            else if (set[i - 1] <= j)
                sos[i][j] = (sos[i - 1][j - set[i - 1]] || sos[i - 1][j]);
            else
                sos[i][j] = sos[i - 1][j];
        }
    }
    
    if (sos[N][SUM])
        printf("TRUE\n");
    else
        printf("FALSE\n");
    return 0;
}
