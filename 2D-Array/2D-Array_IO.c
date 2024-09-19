//Read a 2D array and print the values.
#include <stdio.h>
void main()
{
	int row,col,i,j;
	printf("Enter the row size: ");
	scanf("%d",&row);
	printf("Enter the column size: ");
	scanf("%d",&col);
	int arr[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the array element at [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nThe array is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
