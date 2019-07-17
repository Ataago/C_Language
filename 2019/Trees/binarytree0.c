//Binary Search Tree

#include<stdio.h>
#include<stdlib.h>

// Structure to store the tree nodes for the binary tree
struct node
{
    int data;
    struct node *left, *right;
};

typedef struct node node;

// Functions on Binary Tree
#include "binaryTraversals.h"
#include "treeproperties.h"
#include "find.h"

// Root Nood intialzed to zero
node *root = NULL;

// Create a node for Binary Search Tree
node *createBST(node *root, int ele)
{
    if(root == NULL)
    {
        root=(node*)malloc(sizeof(node));
        root->left = root->right = NULL;
        root->data = ele;
        return root;
    }
    else
    {
        if(ele <= root->data)
            root->left = createBST(root->left,ele);
        else if(ele> root->data)
            root->right = createBST(root->right, ele);
        else
            printf("Dulplicate");
        return root;
    }
}

int main()
{
    root = createBST(root, 2);
    root = createBST(root, 1);
    root = createBST(root, 4);
    root = createBST(root, 3);
    
    /*
          2
         / \
        1   4
           /
          3
     */
    
    printf("\nIn Order:\t"); inorder(root);
    printf("\nPre Order:\t"); preorder(root);
    printf("\nPost Order:\t"); postorder(root);
    printf("\nDouble Order:\t"); doubleorder(root);
    printf("\nTriple Order:\t"); tripleorder(root);
    printf("\n");printf("\n");
    
    printf("Total number of Nodes: %d\n", countNodes(root));
    printf("Total number of Leaf Nodes: %d\n", countLeafNodes(root));
    printf("Total number of Non Leaf Nodes: %d\n", countNonLeafNodes(root));
    printf("Total number of Complete Nodes: %d\n", countFullNodes(root));
    printf("Height of the Tree: %d\n", treeHeight(root));
    printf("\n");printf("\n");

    
    printf("Minimum of BST: %d\n", minBST(root));
    printf("Maximum of BST: %d\n", maxBST(root));
    printf("\n");printf("\n");

    return 0;
}
