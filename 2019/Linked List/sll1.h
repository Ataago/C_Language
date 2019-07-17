// Check if list is in non decreasing order

int isNonDecreasing(node *cur)
{
    return (cur == NULL || cur->link == NULL || (cur->data <= cur->link->data && isNonDecreasing(cur->link)));
}
