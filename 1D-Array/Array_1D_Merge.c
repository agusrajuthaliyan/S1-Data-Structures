#include<stdio.h>
void main()
{
	int i,j,size1,size2,size3=0;

	printf("Enter the size of the array1: ");
	scanf("%d",&size1);
    printf("Enter the size of the array2: ");
    scanf("%d",&size2);
	int arr1[size1],arr2[size2];
	printf("Enter the elements in the array1\n");
	for(i=0; i<size1; i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elements in the array2\n");
	for(i=0; i<size2; i++)
	{
		scanf("%d",&arr2[i]);
	}
    size3=size1+size2;
    int arr3[size3];
    for (i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }
    for (i = 0, j = size1;
         j < size3 && i < size2; i++, j++) {
        arr3[j] = arr2[i];
    }	for(i=0; i<size3; i++)
	{
		printf("%d\t",arr3[i]);
	}
}