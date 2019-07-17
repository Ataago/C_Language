// Traversals on Binary Tree


void inorder(node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void doubleorder(node *root)
{
    if (root)
    {
        printf("%d ", root->data);
        doubleorder(root->left);
        printf("%d ", root->data);
        doubleorder(root->right);
    }
}

void tripleorder(node *root)
{
    if (root)
    {
        printf("%d ", root->data);
        tripleorder(root->left);
        printf("%d ", root->data);
        tripleorder(root->right);
        printf("%d ", root->data);
    }
}
