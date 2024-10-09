#include <stdio.h>
void print_array(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d, ",arr[i]);
	}
}
void bubble_sort(int arr[],int size)
{
	int i,j,temp;
    for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	print_array(arr,size);
}
void selection_sort(int arr[],int size)
{
	int i,j,small,temp;
	for(i=0;i<size-1;i++)
	{
		small=i;
		for(j=i+1;j<size-i-1;j++)
		{
			if(arr[j]<arr[small])
			{
				temp = arr[small];
				arr[small] = arr[j];
				arr[j] = temp;
			}
		}
	}
	print_array(arr,size);
}
void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    print_array(arr,size);
}
void main()
{
	int size, i,j;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Now Enter the Array:\n");
	for(i=0;i<size;i++)
	{
		printf("Enter Array Element[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Sorting the array using, Bubble Sort!\n");
	bubble_sort(arr,size);
	printf("\nSorting the array using Selection Sort! \n");
	selection_sort(arr,size);
    printf("\nSorting the array using Insertion Sort!\n");
    insertion_sort(arr, size);
		
}
	