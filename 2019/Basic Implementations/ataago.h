#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void test()
{
    printf("Welcome to ataago.h\n");
}

// implementation of strcpy
char* gostrcpy(char *s, char *t)
{
    char *cpy = s;
    while ((*s++ = *t++) != '\0');
    return cpy;
}

// Implementation of strcat, t is concatinated to s
void gostrcat(char *s, char *t)
{
    while (*s++ != '\0');
    s--;    // points to Null char EOF
    while ((*s++ = *t++) != '\0');
}

// implementation of strcmp, returns 0 if same, else returns difference
int gostrcmp(char *s, char *t)
{
    while (*s++ == *t++)
        if (*(s - 1) == '\0')
            return 0;
    return *s - *t;
}

// Implementation of strlen, which returns the length of the string.
int gostrlen(char *s)
{
    int len = 0;
    while(*s++ != '\0')
        len++;
    return len;
}
