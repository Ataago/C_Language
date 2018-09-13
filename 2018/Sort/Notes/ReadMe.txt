// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;

   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}



// C program for implementation of selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    								// One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {					
    	min_idx = i;						// Find the minimum element in unsorted array
        for (j = i+1; j < n; j++)
        	if (arr[j] < arr[min_idx])
            		min_idx = j;				
        swap(&arr[min_idx], &arr[i]);
    }
}
 

//insertion sort

void insertrionSort()
{
	int i, j, key;
	
	for( i=1; i<n; i++ )
	{
		key = a[i];
		j = i-1;

		while( j >= 0 && a[j] > key )
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}

}