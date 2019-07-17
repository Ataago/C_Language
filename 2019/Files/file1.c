// Writing on a file

#include <stdio.h>

int main()
{
    FILE *fp = fopen("text1.txt", "a");
    
    char ch;
    
    while ((ch = getchar()) != EOF) // Ctrl + d in linux or Ctrl + z in windows
        putc(ch, fp);
    
    fclose(fp);
    return 0;
}
