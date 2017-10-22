#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[10][10],a[10];
    gets(a);
    s[0][0]='a';
    gets(s[1]);
    s[2][0]='a';
    s[3][0]='a';
    s[4][0]='\0';

    puts(s);
    puts(a);

}
