#include <stdio.h>
void main()
{
	int size, i,j,elem,temp,mid,found=0;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Now Enter the Array:\n");
	for(i=0;i<size;i++)
	{
		printf("Enter Array Element[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
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
	printf("The Array after sorting:\n")	;
	for(i=0;i<size;i++)
	{
		printf("%d, ",arr[i]);
	}

	printf("\nEnter the Element to search: ");
	scanf("%d",&elem);
	int start =0;
	int end = size-1;
	while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == elem)
        {
            printf("Element %d found at index %d.\n", elem, mid);
            found = 1; // Element found
            break;
        }
        else if (arr[mid] < elem)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (found==0)
    {
        printf("Element %d not found in the array.\n", elem);
    }
}
