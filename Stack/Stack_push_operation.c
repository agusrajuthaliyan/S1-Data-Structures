#include <stdio.h>

#define MAX 10

int stack[MAX];
int top=-1;

void push()
{
	int number;
	if(top==MAX-1)
	{
		printf("\noverflow: Stack is full,Maximum size is 10\n");	
	}
	else
	{
		printf("Enter the element to be added onto stack: ");
		scanf("%d",&number);
		stack[++top]=number;
		printf("Element %d pushed onto stack.\n",number);
		
	}
}

int main()
{   
    int choice;
    while (1)
    {
        printf("\nStack Operations Menu:\n");
        printf("1. Push an element\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                return 0;  
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
	printf("stack push operation\n");
	push();
	return 0;
}