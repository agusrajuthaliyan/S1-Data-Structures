#include <stdio.h>

void multiplication(int row, int column, int row2, int column2, int array1[row][column], int array2[row2][column2]) 
{
	int i,j,k;
	int result[row][column];
	
	printf("Resultant Matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column2;j++)
		
		{ 
		    result[i][j]=0;
			for(k=0;k<row2;k++)
			{
				result[i][j]+=array1[i][k]*array2[k][j];
			}
			printf("%d ",result[i][j]);	
		}
		printf("\n");
	}
}

void main()
{
	int i,j,row,column,row2,column2;
	printf("Enter number of rows: ");
	scanf("%d",&row);
	printf("Enter number of columns: ");
	scanf("%d",&column);
	int array1[row][column];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("Enter element for first array[%d][%d]: ",i,j);
		scanf("%d",&array1[i][j]);
	    }
	}
	printf("Enter number of rows: ");
	scanf("%d",&row2);
	printf("Enter number of columns: ");
	scanf("%d",&column2);
	while(row2!=column)
	{
	  printf("The number of columns in Matrix-1 must be "
               "equal to the number of rows in "
               "Matrix-2\n");
                printf("Enter number of rows: ");
				scanf("%d",&row2);
				printf("Enter number of columns: ");
				scanf("%d",&column2);
    }
	
	int array2[row2][column2];
	printf("\nThe second matrix elements: \n");
	
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
		printf("Enter element for second array[%d][%d]: ",i,j);
		scanf("%d",&array2[i][j]);
	    }
	}
	
	printf("Elements of first array is: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		   printf("%d ",array1[i][j]);
        }
        printf("\n");
	}
    	printf("Elements of second array is: \n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
			printf("%d ",array2[i][j]);
	    }
	    printf("\n");
	}
	multiplication(row, column, row2, column2, array1, array2);
}

