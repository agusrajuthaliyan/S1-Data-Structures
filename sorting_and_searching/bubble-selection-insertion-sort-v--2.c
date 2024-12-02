#include <stdio.h>
#include <stdlib.h>
void print(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
}

void selectionsort(int arr[],int size)
{
    int i,j,temp,big;
    for(i=0;i<size-1;i++)
    {
        big=i;
        for(j=i+1;j<size;j++)
        {
            if (arr[big]>arr[j])
            {
                big=j;
            }
            else
            {
                continue;
            }
        }
        temp = arr[i];
        arr[i] = arr[big];
        arr[big] = temp;
    }
    printf("Using selection sort: ");
    print(arr,size);
}
void bubblesort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nUsing bubblesort: ");
    print(arr,size);
}

void insertionsort(int arr[],int size)
{
	int i,j,k;
	for(j=1;j<size;j++)
	{
    	k=arr[j];
    	for(i=j-1;i>=0 && k<arr[i]; i--)
    		arr[i+1]=arr[i];
    	arr[i+1]=k;
	}
	printf("Using Insertion sort: ");
	print(arr,size);
}  


void main()
{
   int size,i,ch;
   printf("Enter the array size: ");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the array \n");
   for(i=0;i<size;i++)
   {
       printf("Enter the array element arr[%d]: ",i);
       scanf("%d",&arr[i]);
   }
   while(1)
   {
       printf("\n0. Exit");
       printf("\n1. Bubble Sort");
       printf("\n2. Selection Sort");
       printf("\n3. Insertion Sort");
       printf("\n\nEnter choice: ");
       scanf("%d",&ch);
       switch(ch)
       {
           case 0:
           {
               exit(0);
           }
           case 1:
           {
               bubblesort(arr,size);
               break;
           }
           case 2:
           {
               selectionsort(arr,size);
               break;
           }
           case 3:
           {
               insertionsort(arr,size);
               break;
           }
           default:
           {
               printf("wrong input");
               break;
           }
        }
   }
}