// Insertion sort

#include <stdio.h>

int a[] = {4, 5, 2, 6, 2, 7, 3, 1};
int n = 8;

void display()
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
     printf("\n");
}

void insertion()
{
    for(int i = 1; i < n; i++)  // Iterate from a[1] to a[n - 1]
    {
        int key = a[i];
        while (key < a[i - 1] && i > 0) // Check where to insert in the previous array.
        {
            a[i] = a[i - 1];
            i--;
        }
        a[i] = key;
    }
}

int main()
{
    display();
    insertion();
    display();
    return 0;
}
