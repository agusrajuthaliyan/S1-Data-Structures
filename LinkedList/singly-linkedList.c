#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
struct node
	{
		int data;
		struct node *next;
	};
struct node *start=NULL;
void add_end()
{
	int val;
	struct node *temp,*ptr;
	printf("\nEnter the value to be added :");
	scanf("%d",&val);
	temp=malloc(sizeof(struct node));
	temp->data=val;
	temp->next=NULL;
	if (start == NULL)
		start=temp;
	else
	{
		ptr=start;
		while (ptr->next !=NULL)
		ptr=ptr->next;
		ptr->next=temp;
	}
}
void add_start()
{
	int val;
	struct node *temp;
	printf("\nEnter the value to be added :");
	scanf("%d",&val);
	temp=malloc(sizeof(struct node));
	temp->data=val;
	temp->next=start;
	start=temp;
}
void delete_end()
{
	struct node *temp;
	int val=0;
	temp=start;
	if (start==NULL)
		printf("\nLinked list is Empty");
	else
		if (start->next==NULL)
		{
			val= start->data;
			printf("\nThe deleted value is %d",val);
			start=NULL;			
		}
	else 
	{
		while (temp->next->next !=NULL)
		temp=temp->next;
		val= temp->next->data;
		printf("\nThe deleted value is %d",val);
		temp->next=NULL;	
	}

}
void delete_start()
{
	int val=start->data;
	printf("\nThe deleted value is %d",val);
	start= start->next;
}
void no_of_nodes()
{
	struct node *temp;
	int count=0;
	temp=start;
	while (temp!= NULL)
	{
		temp=temp->next;
		count++;
	}
	printf("\n The total number of nodes in the list = %d",count);
}
void delete_pos()
{
	int pos,i=1,val;
	struct node *ptr;
	printf("\nEnter the position from which element is to be deleted : ");
	scanf("%d", &pos);
	ptr=start;
	while (i<pos-1)
	{
		ptr=ptr->next;
		i++;	
	}
	if (pos==1)
		delete_start();
	else
	{
		val= (ptr->next)->data;
		ptr->next= (ptr->next)->next;
		printf("\nThe deleted value is %d",val);	
	}
}
void display()
{
	struct node *p;
	if (start==NULL)
		printf("\nThe list is empty");
	else
		{
			p=start;
			while (p!=NULL)
			{
				printf("%d->",p->data);
				p=p->next;
			}
			printf("NULL");
		}
}
int main()
{
	char ch;
	while (1)
	{
		printf("\n\n 	1: Add to the linked List at the end");
		printf("\n 	2: Add to the linked List at the start");
		printf("\n 	3: Delete from the linked list from the end");
    	printf("\n 	4: Delete from the start of the Linked List");
		printf("\n 	5: Find the number of nodes in the List");
		printf("\n 	6: Delete from a specific position");
		printf("\n 	7: Display the Linked List");
		printf("\n 	0.Quit");
		printf("\n\n 	Enter your option : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: add_end();break;
			case 2: add_start();break;
			case 3: delete_end(); break;
			case 4: delete_start(); break;
			case 5: no_of_nodes(); break;
			case 6: delete_pos();break;
			case 7: display(); break;
			case 0: exit(0);
		}
	}
	return 0;
}
