// Demo

#include <stdio.h>

void demo(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        demo(n - 2);
        printf("%d ", n);
    }
}

int main()
{
    demo(6);    // 3 2 1 1 2 3
    printf("\n");
    return 0;
}


