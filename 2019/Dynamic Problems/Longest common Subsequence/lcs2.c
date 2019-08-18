
// Longest common subsequence top down (memoization)

#include <stdio.h>
#include <string.h>

int f[1000][1000];

int max(int x, int y)
{
    return x > y? x:y;
}

int LCS(char *x, char *y, int m, int n)
{
    if (f[m][n] != -1)
    {
        return f[m][n];
    }
    
    if (m == 0 || n == 0)
    {
        f[m][n] = 0;
        return f[m][n];
    }
    
    if (x[m - 1] == y[n - 1])
    {
        f[m][n] = 1 + LCS(x, y, m - 1, n - 1);
        return f[m][n];
    }
    
    f[m][n] = max(LCS(x, y, m - 1, n), LCS(x, y, m, n - 1));
    return f[m][n];
    
}

int main()
{
    char x[] = "aabaads";
    char y[] = "acaaas";
    int m = strlen(x);
    int n = strlen(y);
    
    memset(f, -1, sizeof(f));
    
    int lcs_Count = LCS(x, y, m, n);
    printf("%d\n", lcs_Count);
    return 0;
}

