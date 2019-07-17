// Stack using Linked list

#include <stdio.h>
#include <stdlib.h>

#include "node.h"

void push(int item)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = item;
    temp->link = head;
    head = temp;
}

int pop()
{
    if (!head)
        return (-99999999);
    node *cur = head;
    head = cur->link;
    int item = cur->data;
    free(cur);
    return item;
}


int main()
{
    push(4);
    push(3);
    push(2);
    display();
    printf("popped: %d\n", pop());
    display();

    return 0;
}
