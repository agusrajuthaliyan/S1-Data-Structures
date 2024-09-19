//Reverse the array elements without using any additional array variable

#include <stdio.h>

void main()
{
   int size,i,j,temp;
   printf("Enter the size of the array: ");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the array elements:\n");
   for(i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0,j=size-1;i<size/2,j>=size/2;i++,j--)
   {
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }
   printf("The reversed array is: \n");
   for(i=0;i<size;i++)
   {
       printf("%d \t",arr[i]);
   }
}