// Singly Linked list

#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "sll1.h"

// Initalize a head pointer of type node
node *head = NULL;

void insertBeg(int value)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->link = head;  // handles both empty and non empty lists.
    head = temp;
}

void insertEnd(int value)
{
    node *temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->link = NULL;
    
    if (!head)  // when list is empty
    {
        head = temp;
        return;
    }
    node *cur = head;
    while (cur->link)
        cur = cur->link;
    cur->link = temp;
}

void deleteBeg()
{
    if(!head)
    {
        printf("list Empty\n");
        return;
    }
    node *cur = head;   // Temporary pointer to iterate
    head = cur->link;   // Handles both 1 or more than one nodes
    printf("Deleted %d\n", cur->data);
    free(cur);
}

void deleteEnd()
{
    if (!head)  // no nodes in list
    {
        printf("list Empty\n");
        return;
    }
    node *cur = head;
    if (!cur->link)     // Only 1 node in list
    {
        head = NULL;
        printf("Deleted %d\n", cur->data);
        free(cur);
        return;
    }
    while (cur->link->link) // more than 1 node in list
        cur = cur->link;
    printf("Deleted %d\n", cur->link->data);
    free(cur->link);
    cur->link = NULL;
}

void display()
{
    node *cur = head;
    while(cur)
    {
        printf("-> %d ", cur->data);
        cur = cur->link;
    }
    printf("\n");
}

void displayRecursive(node *cur)
{
    if(cur)
    {
        printf("-> %d ", cur->data);
        displayRecursive(cur->link);
    }
}

void displayRecursiveReverse(node *cur)
{
    if (cur)
    {
        displayRecursiveReverse(cur->link);
        printf("-> %d ", cur->data);
    }
}
node *IterativeReverse(node *cur) // we use 3 nodes... prev cur nextnode
{
    node *prev = NULL, *nextnode = NULL;
    
    while (cur)
    {
        nextnode = cur->link;
        cur->link = prev;
        
        prev = cur;
        cur = nextnode;
    }
    
    return prev;
}

void recursiveReverse(node *prev, node *cur)
{
    if (!cur)
        head = prev;
    else
    {
        recursiveReverse(cur, cur->link);
        cur->link = prev;
    }
}
int main()
{
    // Insert
    insertEnd(3);
    insertBeg(2);
    insertBeg(1);
    insertBeg(0);
    insertEnd(4);
    
    printf("Original List: ");
    display();
    printf("Recursive Display:");
    displayRecursive(head);
    printf("\nRecursive Reverse:");
    displayRecursiveReverse(head);
    printf("\nIterative Reverse:");
    head = IterativeReverse(head);
    display();
    recursiveReverse(NULL, head);
    display();
    // Delete
//    deleteEnd();
//    deleteEnd();
//    deleteEnd();
//    deleteEnd();
//    deleteEnd();
//    deleteEnd();
//
//    display();
    
//    recursiveReverse(NULL, head);
    display();
    printf("\n isNonDecreasing: %d\n", isNonDecreasing(head));
    
    return 0;
}
