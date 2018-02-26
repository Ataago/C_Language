/*  Merge Sort
    Splitting the array into 2 arrays from the mid - Divide
    merging them in ascending order - Conquer

    @author Mohammed Ataaur Rahaman
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
//#include <cstdlib>

void Merge_Sort(int a[], int low, int high);
void Merge(int a[],int low, int mid, int high);

int main()
{
	int a[10000],n,i,temp[10000];
	float start,end;

	printf("Enter the number of Elements: ");
	scanf("%d",&n);

	for(i = 0; i<n; i++)
        a[i] = rand();
       //scanf("%d",&a[i]);

	printf("Array is: ");
	for(i=0; i<n; i++)
		//printf("%d ",a[i]);

    start = clock();
    Merge_Sort(a,0,n-1);
    end = clock();

	printf("\nSorted Array is: ");
	//for(i=0; i<n; i++)
		//printf("%d ",a[i]);

    printf("\n time: %f",(end-start)/CLK_TCK);


	return 0;


}
void Merge_Sort(int a[], int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high)/2;

        //Dividing the array into 2 arrays
		Merge_Sort(a,low,mid);         //left array
		Merge_Sort(a,mid+1,high);      //right array

		//conquering by merging the left and right array
		Merge(a,low,mid,high);
	}
}

void Merge(int a[],int low, int mid, int high)
{
	int i, low_right, size, temp_pos, temp[10000];
	low_right = mid + 1;
	temp_pos = low;
	size = high - low;      // size = n - 1

	while( (low <= mid) && (low_right <= high))
	{
		if(a[low] <= a[low_right])               //check elements of left array with right , if small enter into temp[]
            temp[temp_pos++] = a[low++];
        else                                //else enter the right one in temp[]
            temp[temp_pos++]  = a[low_right++];
    }

    //to move remaining elements into temp[]
    while(low <= mid)
        temp[temp_pos++] = a[low++];
    while( low_right <= high)
        temp[temp_pos++] = a[low_right++];

    //put all the sorted array(temp[]) back to original array(a[])
    for(i=0; i <= size; i++)
        a[high] = temp[high--];
}
