// Calling main function recursivily
#include <stdio.h>

int main()
{
    static int i = 3;
    if (i--)
    {
        printf("%d ", i);
        main();
    }
    return 0;
}
