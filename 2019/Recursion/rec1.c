// Demo

#include <stdio.h>

void demo(int n)
{
    if (n > 0)
    {
        demo(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    demo(3);    // 1 2 3
    printf("\n");
    return 0;
}

