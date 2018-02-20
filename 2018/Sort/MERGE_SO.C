//Merge Sort

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Merge_Sort();
void Merge();

void main()
{
	int a[50],n,i;
	clrscr();

	printf("Enter the number of Elements: ");
	scanf("%d",&n);

	for(i = 0; i<n; i++)
		a[i] = random(99);

	printf("Array is: ");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);

     //	Merge_Sort(a,0,n-1);

	printf("\nSorted Array is: ");
	for(i=0; i<n; i++)
		printf("%d ",a[i]);

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
		if(a[left] <= a[mid])
		{
			temp
		}
	}