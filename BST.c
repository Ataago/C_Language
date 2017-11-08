//BST and show inorder post order and preorder

#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>

struct tnode
{
    int data;
    struct tnode *r, *l;
};

typedef struct tnode tnode;

tnode *createBST(tnode *, int);
void inorder(tnode *);
void preorder(tnode *);
void postorder(tnode *);

void main()
{
    tnode *root = NULL;
    int ch, ele, n , i;

    while(1)
    {
        printf("Binary search tree operations : \n 1-Create 2-Inorder 3-preorder 4-postorder 5- exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                //root = NULL;
                printf("Number of nodes: ");
                scanf("%d",&n);
                for(i=1; i<=n; i++)
                {
                    printf("Data for Node %d :",i);
                    scanf("%d",&ele);
                    root = createBST(root, ele);
                }
                break;
            case 2:
                inorder(root);break;
            case 3:
                preorder(root);break;
            case 4:
                postorder(root);break;
            case 5:exit(0);
        }
    }
}
tnode *createBST(tnode *root, int ele)
{
    if(root == NULL)
    {
        root=(tnode*)malloc(sizeof(tnode));
        root->l = root->r = NULL;
        root->data = ele;
        return root;
    }
    else
    {
        if(ele < root->data)
            root->l = createBST(root->l,ele);
        else if(ele> root->data)
               root->r = createBST(root->r, ele);
            else
                printf("Dulplicate");
        return root;
    }
}
void inorder(tnode *root)
{
    if(root != NULL)
    {
        inorder(root->l);
        printf("%d ",root->data);
        inorder(root->r);
    }
}
void preorder(tnode *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preorder(root->l);
        preorder(root->r);
    }
}
void postorder(tnode *root)
{
    if(root != NULL)
    {
        postorder(root->l);
        postorder(root->r);
        printf("%d ",root->data);
    }
}
