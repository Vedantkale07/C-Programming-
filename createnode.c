#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int info;
	struct NODE *next;
}NODE;

void createlist(NODE *head)
{
	int n,i;
	NODE *last,*newnode;
	printf("\nHow many node:");
	scanf("%d\t",&n);
	last=head;
	for(i=1;i<n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("\nNODE data/info:");
		scanf("%d",&newnode->info);
		last->next=newnode;
		last=newnode;
	}
}

void display (NODE *head)
{
	NODE *temp;
	temp=head->next;
	while(temp->next!=NULL)
	{
		printf("\n %d",temp->info);
		temp=temp->next;
	}
int main()
{
	NODE *head;
	head=(NODE *)malloc(sizeof (NODE));
	head->next=NULL;
	createlist(head);
	display(head);

}
}

