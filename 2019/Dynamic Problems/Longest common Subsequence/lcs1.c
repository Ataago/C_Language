
// Longest common subsequence iterative
// time complexity O(mn)

#include <stdio.h>
#include <string.h>

/*
        y b d c a b a
      x 0 0 0 0 0 0 0
      a 0 0 0 0 1 1 1
      b 0 1 1 1 1 2 2
      c 0 1 1 2 2 2 2
      b 0 1 1 2 2 3 3
      d 0 1 2 2 2 3 3
      a 0 1 2 2 3 3 4
      b 0 1 2 2 3 4 4
*/
int max(int x, int y)
{
    return x > y? x:y;
}

void LCS(char *x, char *y, int m, int n, int f[][n + 1])
{
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i == 0 || j == 0)
                f[i][j] = 0;
            else
            {
                if (x[i - 1] == y[j - 1])
                    f[i][j] = 1 + f[i - 1][j - 1];
                else
                    f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
}

int main()
{
    char x[] = "abcbdab";
    char y[] = "bdcaba";
    int m = strlen(x);
    int n = strlen(y);
    
    // Creating array of f[m][n]
    int f[m + 1][n + 1];

    LCS(x, y, m, n, f);
    
    int lcs_Count = f[m][n];
    printf("%d\n", lcs_Count);
    
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
            printf("%d ", f[i][j]);
        printf("\n");
    }
    return 0;
}
