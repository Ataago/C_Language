// Various properties of the tree.



// Total Number of nodes in the Binary Tree
int countNodes(node *root)
{
    if (root)
        return (1 + countNodes(root->left) + countNodes(root->right));
    else
        return 0;
}

// Total number of Leaf nodes
int countLeafNodes(node *root)
{
    if (root)
    {
        if (!root->left && !root->right)
            return 1;
        else
            return (countLeafNodes(root->left) + countLeafNodes(root->right));
    }
    else
        return 0;
}

// Total number of Non Leaf nodes.
int countNonLeafNodes(node *root)
{
    if (root)
    {
        if (root->left || root->right)
            return (1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right));
        else
            return 0;
    }
    else
        return 0;
}

// Number of Complete Nodes(full Nodes).
int countFullNodes(node *root)
{
    if (root)
    {
        if (root->left && root->right)
            return (1 + countFullNodes(root->left) + countFullNodes(root->right));
        else
            return (countFullNodes(root->left) + countFullNodes(root->right));
    }
    else
        return 0;
}

int max(int a, int b)
{
    return a > b? a:b;
}
// Height of the given tree.
int treeHeight(node *root)
{
    if (root)
    {
        if (root->left || root->right)
             return max(1 + treeHeight(root->left), 1 + treeHeight(root->right));
        else
            return 0;
    }
    else
        return 0;
}
