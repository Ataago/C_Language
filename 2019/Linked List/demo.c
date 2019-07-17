#include <stdio.h>

int main()
{
    // prime numbers
    // 2 3 5 7 11 17 19
    int count = 0;
    
    for (int i = 2; i < 200; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                count++;
        
        if(count == 2)
            printf("%d\n", i);
    }
    return 0;
}
