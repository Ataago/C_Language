// Merge Sort
// Divide and conqure

#include <stdio.h>

int a[] = {4, 5, 2, 6, 2, 7, 3, 1};
int n = 8;

void display()
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void merge(int a[], int p, int m, int q)
{

    int left[m - p + 1], right[q - m + 2];
    int i, j = 0;
    for (i = p; i < m; i++)
        left[j++] = a[i];
    left[j] = 999999;
    j = 0;
    for (i = m; i <= q; i++)
        right[j++] = a[i];
    right[j] = 999999;

    i = 0;
    j = 0;
    for (int k = p; k <= q; k++)
    {
        if (left[i] <= right[j])
            a[k] = left[i++];
        else
            a[k] = right[j++];
    }
}

void mergesort(int a[], int p, int q)
{
    if (p < q)
    {
        int m = (p + q) / 2;
        mergesort(a, p, m);
        mergesort(a, m + 1, q);
        merge(a, p, m + 1, q);
    }
}

int main()
{
    display();
    mergesort(a, 0, 7);
    display();
    return 0;
}

