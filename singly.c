#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
	
}node;

int main()
{
	int n;
	node * head;
	head=(node *)malloc(sizeof(node));
	head->next=NULL;
 	createlist(head);
 	printf("\n !! created list !!\n");
 	display(head);
}

void createlist (node *head)
{
	int n,i;
	node *last,*newnode;
	printf("\n HOW many node= ");
	scanf("%d",&n);
	last=head;
	for(i=1;i<=n;i++)
	{
		newnode=(node *)malloc(sizeof(node));
		newnode->next=NULL;
		printf("\nEnter the Node/Data: \n");
		scanf("%d",&newnode->info);
		last->next=newnode;
		last=newnode;
	}
}
void display( node *head)
{
	node *temp;
	temp=head->next;
	while(temp!=NULL)
	{
		printf("->%d\t",temp->info);
		temp=temp->next;
	}
}
