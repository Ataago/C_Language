//Insertion Sort

#include<stdio.h>

int main()
{
    int a[10], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for( i = 1; i < n; i++)     //key traverse from a[1] to a[n-1]
        for( j = i;  j > 0; j--)    //checks if key < the previous all to swap
            if( a[j-1] > a[j])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }

    printf("sorted array is: ");
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);

   return 0;
}
