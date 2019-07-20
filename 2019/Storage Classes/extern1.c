
// Demo to produce a linker error

#include <stdio.h>

#include "extern.h"

int main()
{
    i = 20;
    printf("%d\n", i);
    return 0;
}
