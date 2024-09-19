#include<stdio.h>
void main()
{
  int i,j,size,temp;
    
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                continue;
            }
            else if(arr[i]>=arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else
            {
                continue;
                
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nThe 2 nd Largest Element is %d\t",arr[size-2]);

    
}