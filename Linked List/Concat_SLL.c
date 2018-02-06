//Concatenate 2 Singly Linked List to the first list
/*
    operations on sll
 INSERT DELETE DISPALY
*/

#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>
 struct node
 {
     int data;
     struct node *link;
 }node1,node2;
// node1 *First = NULL;
//node2 *First2 = NULL;

 void InsertBeg(struct node Node);
 void DisplayFirstSLL();
 void DeleteBeg();
 void ConcatToFirstSLL();

 void main()
 {
     int ch;

     printf("Enter the choice for SLL:");

     while(1)
     {
        printf("\n 1-InsertFirstSLL 2-InsertSecondSLL End 3-DisplayFirstSLL 4-ConcatToFirstSLL 0-Exit:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                InsertBeg(node1);
                break;
            case 3:
                Display();
                break;
            case 4:
                ConcatToFirstSLL();
                break;
            case 2:
                InsertBeg(node2);
                break;
            case 0:
                printf("Exit");
                exit(0);
                break;
            default:
                printf("Invalid");
                break;
        }
     }
 }

 void InsertBeg(struct node *Node)
 {
     struct node *temp;
     temp = (struct node*)malloc(sizeof(struct node));
     temp->link = NULL;

     printf("Insert Element:");
     scanf("%d",&temp->data);

     if(Node)
        temp->link = Node;
     Node = temp;
 }
 void DisplayFirstSLL();
 {
     Node cur;
     cur = First;
     if(!First)
     {
         printf("Underflow");
         return;
     }
     while(cur)
     {
         printf("%d ",cur->data);
         cur = cur->link;
     }
 }
