//Add two matrices and print the sum matrix

#include<stdio.h>
void main()
{
	int row1,row2,col1,col2,i,j;
	printf("Enter the first row count: ");
	scanf("%d",&row1);
	printf("Enter the first column count: ");
	scanf("%d",&col1);
	int mat1[row1][col1];
	printf("Enter the second row count: ");
	scanf("%d",&row2);
	printf("Enter the second column count: ");
	scanf("%d",&col2);
	int mat2[row2][col2];
	printf("Enter the first matrix\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("Enter the matrix[%d][%d]: ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the second matrix\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("Enter the matrix[%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	if(row1==row2 && col1==col2)
	{
		int matsum[row1][col1];
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				matsum[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
		printf("Printing the addition matrix\n");
		for(i=0;i<row1;i++)
	    {
		   for(j=0;j<col1;j++)
		   {
			  printf("%d  ",matsum[i][j]);
		   }
		   printf("\n");
	   }
	}
	else
	printf("The matrix cannot be summed because the matrix rows and columns are unequal!!!");
}
