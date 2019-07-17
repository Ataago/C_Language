// Demo

#include <stdio.h>

void demo(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        demo(n - 1);
    }
}

int main()
{
    demo(3);    // 3 2 1
    printf("\n");
    return 0;
}
