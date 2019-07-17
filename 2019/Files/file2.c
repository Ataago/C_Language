// Reading contents of a file

#include <stdio.h>

int main()
{
    FILE *fp = fopen("text1.txt", "r");
    if (fp == NULL)
        printf("Coundn't open the file.\n");
    
    char ch;
    while ((ch = getc(fp)) != EOF)
        printf("%c", ch);
    
    fclose(fp);
    return 0;
}
