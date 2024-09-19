//Find the largest, and smallest value in an integer array
#include <stdio.h>

void main()
{
  int i,size,small,large;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    large=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<=small)
        {
            small = arr[i];
        }
        else if(arr[i+1]>=large)
        {
            large = arr[i+1];
        }
    }
    

    printf("Smallest: %d\n",small);
    printf("Largest: %d",large);
}