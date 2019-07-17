#include<stdio.h>
#include<conio.h>

void hanoi(int n, char *source, char *destination, char *auxilary)
{
    if(n==0)
        return;

    hanoi(n-1,source,auxilary, destination);
    printf("Move disc %d from %s to %s\n",n,source,destination);
    hanoi(n-1,auxilary,destination, source);
}
void main()
{
    int n;

    printf("Enter Number of Discs: ");
    scanf("%d",&n);

    printf("Objective is to move all the discs from A to B\n\n");

    hanoi(n,"A","B","C");
}
