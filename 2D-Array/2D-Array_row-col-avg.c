// Read an integer matrix. 
//  a. Function to find and print the average of each row of the matrix
//  b. Function to find and print  the average of each column of the matrix

#include <stdio.h>
void main()
{
	int i,j,row,col;
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
	printf("\n");
	row_average(row,col,arr);
	printf("\n");
	col_average(row,col,arr);
}
void row_average(int row,int col, int arr[row][col])
{
	int i,j;
	float rsum=0;
	printf("The Row Averages are given below:\n");
	for(i=0;i<row;i++)
	{
		rsum=0;
		for(j=0;j<col;j++)
		{
			rsum=rsum+arr[i][j];
		}
		printf("The [%d]th row average is: %f\n",i+1,rsum/col);
	}
}
void col_average(int row,int col, int arr[row][col])
{
	int i,j;
	float csum=0;
	printf("The Column Averages are given below:\n");
	for(j=0;j<col;j++)
	{
		csum=0;
		for(i=0;i<row;i++)
		{
			csum=csum+arr[i][j];
		}
		printf("The [%d]th Column average is: %f\n",j+1,csum/row);
	}
}
