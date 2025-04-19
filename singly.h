#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct NODE *next;
	
}NODE;
  
void createlist (NODE *head)
{
	int n,i;
	NODE *last,*newnode;
	printf("\n HOW many node= ");
	scanf("%d",&n);
	last=head;
	for(i=1;i<=n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("\nEnter the Node/Data: \n");
		scanf("%d",&newnode->info);
		last->next=newnode;
		last=newnode;
	}
}
void display( NODE *head)
{
	NODE *temp;
	temp=head->next;
	while(temp!=NULL)
	{
		printf("->%d\t",temp->info);
		temp=temp->next;
	}
}
