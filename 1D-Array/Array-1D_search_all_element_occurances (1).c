#include <stdio.h>

void main()
{
    int i,elem, arrsize,found=0;
    printf("Enter the array size: ");
    scanf("%d",&arrsize);
    int arr[arrsize];
    printf("Enter array elements: ");
    for(i=0;i<arrsize;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an element to search: ");
    scanf("%d",&elem);
    for(i=0;i<arrsize;i++)
    {
        if(elem == arr[i])
        {
            printf("Element %d exists at position %d.\n",elem,i+1);
            found = 1;
        }
    }
    if(found==0)
    printf("Element %d is not found.",elem);
}