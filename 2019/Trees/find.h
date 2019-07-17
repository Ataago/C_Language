

// Minimum element in BST
int minBST(node *root)
{
    if (root)
    {
        if (root->left)
            return minBST(root->left);
        else
            return root->data;
    }
    else
        return -99999999;
}


// Maximum element in BST
int maxBST(node *root)
{
    if (root)
    {
        if (root->right)
            return maxBST(root->right);
        else
            return root->data;
    }
    else
        return 99999999;
}
