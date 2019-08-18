// Longest common subsequence Recursive (navie)
// Time Complexity: O(2^n)

#include <stdio.h>
#include <string.h>

int max(int x, int y)
{
    return x > y? x:y;
}

int LCS(char *x, char *y, int m, int n)
{
    if(m == 0 || n == 0)
        return 0;
    
    if (x[m - 1] == y[n - 1])
        return (1 + LCS(x, y, m - 1, n - 1));
    
    return (max(LCS(x, y, m - 1, n), LCS(x, y, m, n - 1)));
}

int main()
{
    char string1[] = "aabdsd";
    char string2[] = "acaaaads";
    int m = strlen(string1);
    int n = strlen(string2);
    
    int lcs_Count = LCS(string1, string2, m, n);
    
    printf("%d\n", lcs_Count);
    return 0;
}
