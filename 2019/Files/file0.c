// Length of text in the file.

#include <stdio.h>

int main()
{
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL)
        printf("Couldn't open the file.\n");
    
    fseek(fp, 0, SEEK_END);
    
    int len = ftell(fp);
    printf("Length of the file: %d\n", len);
    
    return 0;
}
