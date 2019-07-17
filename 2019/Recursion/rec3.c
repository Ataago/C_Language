// Demo

#include <stdio.h>

void demo(int n)
{
    if (n > 0)
    {
        demo(n - 1);
        printf("%d ", n);
        demo(n - 1);
    }
}

int main()
{
    demo(3);    // 1 2 1 3 1 2 1
    printf("\n");
    return 0;
}



