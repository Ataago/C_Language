//Singly Linked List
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
 };
 typedef struct node *Node;
 Node First = NULL;

 void InsertBeg();
 void InsertEnd();
 void Display();
 void DeleteEnd();
 void DeleteBeg();

 void main()
 {
     int ch;

     printf("Enter the choice for SLL:");

     while(1)
     {
        printf("\n 1-Insert front 2-Insert End 3-Display 4-DeleteEnd 5-DeleteBeg 0-Exit:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                InsertBeg();
                break;
            case 2:
                InsertEnd();
                break;
            case 3:
                Display();
                break;
            case 4:
                DeleteEnd();
                break;
            case 5:
                DeleteBeg();
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

 void InsertBeg()
 {
     Node temp;
     temp = (Node)malloc(sizeof(Node));
     temp->link = NULL;

     printf("Insert Element:");
     scanf("%d",&temp->data);

     if(First)
        temp->link = First;
     First = temp;
     /*
     if(!temp)  //check memory error
     {
         printf("Memory Error");
         return;
     }
     if(First == NULL)
     {
            temp->link = NULL;
            First = temp;
            return;
     }
     temp->link = First;
     First = temp;
     */

 }

 void InsertEnd()
 {
     Node temp,cur;
     temp = (Node)malloc(sizeof(Node));
     temp->link = NULL;

     printf("Enter the Element:");
     scanf("%d",&temp->data);

     if(!First)
     {
         First = temp;
         return;
     }
     cur = First;
     while(cur->link /* != NULL */) //syntax error
        cur = cur->link;
     cur->link = temp;
 }

 void Display()
 {
     Node cur;
     cur = First;
     if(!First /*== NULL*/)
     {
         printf("Underflow");
         return;
     }
     while(cur/*->link != NULL*/)
     {
         printf("%d ",cur->data);
         cur = cur->link;
     }
    // printf("%d",cur->data);
 }

 void DeleteEnd()
 {
     Node cur;
     if(First == NULL)
     {
         printf("Underflow");
         return;
     }
     cur = First;
     if(cur->link == NULL)
     {
         printf("Deleted %d",cur->data);
         free(cur);
         First=NULL;
         return;
     }
     while(cur->link->link != NULL)
        cur = cur->link;
    // temp = cur->link;
     printf("Deleted %d",cur->link->data);
     free(cur->link);
     cur->link = NULL;
 }

 void DeleteBeg()
 {
     Node cur,temp;
     if(First == NULL)
     {
         printf("Underflow");
         return;
     }
     cur = First;
     if(cur->link == NULL)
     {
         printf("Deleted %d",cur->data);
         free(cur);
         First = NULL;
         return;
     }
     temp = cur;
     cur = cur->link;
     printf("Deleted %d",temp->data);
     free(temp);
     First = cur;
 }
