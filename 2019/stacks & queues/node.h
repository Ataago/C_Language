
// Structure for the nodes of Singly Linked List
typedef struct node
{
    int data;
    struct node *link;
}node;


// Head or starting address of the Singly Linked list
node *head = NULL;


// to display the list contents
void display()
{
    if (!head)
    {
        printf("list is empty ;(\n");
        return;
    }
    node *cur = head;
    while (cur)
    {
        printf("-> %d ", cur->data);
        cur = cur->link;
    }
    printf("\n");
}
