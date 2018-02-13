#include<stdio.h>
#include<conio.h>

void hanoi(int n, char *source, char *auxilary, char *destination)
{
    if(n==0)
        return;

    hanoi(n-1,source,destination,auxilary);
    printf("Move disc %d from %s to %s\n",n,source,destination);
    hanoi(n-1,auxilary,source,destination);
}
void main()
{
    int n;

    printf("Enter Number of Discs: ");
    scanf("%d",&n);

    printf("Objective is to move all the discs from A to C\n\n");

    hanoi(n,"A","B","C");
}
