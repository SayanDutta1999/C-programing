#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


	struct node
	{
		int data;
		struct node *next;
	};
		struct node *head, *temp, *newnode;
void main()
{
    int choice,count=0;
	head=0;
	while(choice!=0)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data:");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("do you want to continue press (0/1):");
		scanf("%d",&choice);
	}
	// here we are going to traversing the linked list and print the elements
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
		count++;
	}
	printf("%d",count);
	getch();
}
