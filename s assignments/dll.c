#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *pre;
	struct node *next;
};
typedef struct node nd;
nd *head,*temp,*end;
void insertinfront()
{
	nd *newnode;
	int no;
	newnode=(nd*)malloc(sizeof(nd));
	printf("Enter the data:");
	scanf("%d",&no);
	newnode->data=no;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->next=NULL;
		head->pre=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=newnode;
		newnode->pre=temp;
		temp=newnode;
	}
}
void display()
{
	temp=head;
	while(temp->next!=NULL)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
	printf(" %d",temp->data);
}
void reverseorder()
{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	end=temp;
	while(end->pre!=NULL)
	{
		printf(" %d ",end->data);
		end=end->pre;
	}
	printf(" %d",head->data);
	
}
	

int main()
{
	int choice;
	while(1)
	{
	printf("\n 1.Enter number\n 2.Display\n 3.Reverse order\n 4.Exit");
	printf("\nEnter the choice:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			insertinfront();
			break;
		case 2:
			display();
			break;
		case 3:
			reverseorder();
			break;
		default:
			exit(0);
			break;
	}
}
return 0;
}
