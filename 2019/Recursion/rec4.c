// Demo for strings

#include <stdio.h>

void abc(char *s)
{
    if (s[0] == '\0')
        return;
    
    abc(s + 1);
    abc(s + 1);
    printf("%c ", s[0]);
}

int main()
{
    abc("123");    // 1 2 1 3 1 2 1
    printf("\n");
    return 0;
}




