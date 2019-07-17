#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int item;
        struct node *link;
    };
    
    struct node *First = (struct node*)malloc(sizeof(struct node));
    
    First->item = 10;
    First->link = NULL;
    
    struct node *Second = (struct node*)malloc(sizeof(struct node));
    
    Second->item = 20;
    Second->link = NULL;
    
    First->link = Second;
    printf("%d", First->link->item); // OUTPUT 20
    
    return 0;
}
