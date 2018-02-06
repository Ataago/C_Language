#include<stdio.h>
#include<stdlib.h>

int main()
{
    long dnum, q , r;

    int i,j=0;
    char hnum[100];

    printf("Enter decimal Number: ");
    scanf("%ld",&dnum);

    q=dnum;

    while(q>0)
    {
        r=q%16;

        if(r<10)
            hnum[j] = 48 + r;

        else
            hnum[j] = 55 + r;

        q = q/16;
        j++;
    }

    for(i=j-1; i>=0; i--)
        printf("%c",hnum[i]);
    return 0;
}
