#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 126

int t[MAX];
int i,j,k,m,n;

void shift_table( char p[])
{
    m = strlen(p);
    for(i=0;i<126;i++)
        t[i] = m;
    for(i=0;i<m-1;i++)
        t[p[i]] = m - i - 1;
}

int horspool ( char src[], char p[])
{
    n = strlen(src);
    m = strlen(p);
    printf("The length of the text is: %d\n",n);
    printf("The length of the pattern is : %d\n",m);

    i=m-1;
    while (i<n)
    {
        k=0;
        while ((k<m) && (p[m-1-k] == src[i-k]) )
            k++;
        if (k==m)
            return (i-m+1);
        else
            i += t[src[i]];
    }
    return -1;
}

int main()
{
    char src[100],p[100];
    int pos;

    printf("Enter the text in which pattern has to be searched\n");
    gets(src);

    printf("Enter the pattern\n");
    gets(p);

    shift_table(p);
    pos = horspool(src,p);

    if(pos>=0)
        printf("The desired pattern is found at pos : %d\n",pos+1);
    else
        printf("Pattern not found\n");
    return 0;
}
