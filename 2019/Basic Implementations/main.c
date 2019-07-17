// Demo of various implementations
#include <stdio.h>

#include "ataago.h"

int main()
{
    printf("Hello World\n");
    
    char a[] = "ataa";
    char b[] = "go";
    
    printf("Length: %d\n", gostrlen("go"));
    printf("gostrcmp: %d\n", gostrcmp("ataa", a));
    
    gostrcat(a, b);
    
    printf("a: %s\n", a);
    printf("b: %s\n\n", b);
    
    char *c;
    c = gostrcpy(b, a);
    
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    
   
    register int reg = 10;
    printf("%u\n", &reg);
    return 0;
}
