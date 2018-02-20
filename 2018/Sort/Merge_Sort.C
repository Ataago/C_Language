//Merge Sort

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Merge_Sort(int a[],int temp[], int left, int right);
void Merge(int a[],int temp[],int left, int mid, int right);

int main()
{
	int a[50],n,i,temp[50];
//	clrscr();

	printf("Enter the number of Elements: ");
	scanf("%d",&n);

	for(i = 0; i<n; i++)
        scanf("%d",&a[i]);
	printf("Array is: ");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);

    Merge_Sort(a,temp,0,n-1);

	printf("\nSorted Array is: ");
	for(i=0; i<n; i++)
		printf("%d ",temp[i]);

	return 0;
	getch();

}
void Merge_Sort(int a[],int temp[], int left, int right)
{
	int mid;
	if(left < right)
	{
		mid = (left + right)/2;
		Merge_Sort(a,temp,left,mid);
		Merge_Sort(a,temp,mid+1,right);
		Merge(a,temp,left,mid+1,right);
	}
}

void Merge(int a[],int temp[],int left, int mid, int right)
{
	int i, left_end, size, temp_pos;
	left_end = mid - 1;
	temp_pos = left;
	size = right - left + 1;

	while( (left <= left_end) && (mid <= right))
	{
		if(a[left] <= a[mid])       //check elements of left array with right , if small enter into temp
            temp[temp_pos++] = a[left++];
        else                                //else enter the right one in temp
            temp[temp_pos++]  = a[mid++];
    }

    //to move remaining elements
    while(left <= left_end)
        temp[temp_pos++] = a[left++];
    while( mid <= right)
        temp[temp_pos++] = a[mid++];

   for(i=0; i <= size; i++)
        a[right--] = temp[right];
}
