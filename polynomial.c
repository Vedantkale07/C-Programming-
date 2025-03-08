#include<stdio.h>
#include<stdlib.h>

typedef struct poly
{
	int coef;
	int expn;
	struct NODE *next;
	
}NODE;

int main()
{
	int n,pos;
	NODE *poly1 = NULL, *poly2 = NULL, *poly=NULL;
	
	poly1=(NODE *)malloc(sizeof(NODE));
	poly1->next=NULL;
	poly2=(NODE *)malloc(sizeof(NODE));
	poly2->next=NULL;
	poly=(NODE *)malloc(sizeof(NODE));
	poly->next=NULL;
	
	printf("\n createfirst polynomial \n");
	createlist(poly1);
	printf("\n First polynomial \n");
	display(poly1);
	
		printf("\n createSecond polynomial \n");
	createlist(poly2);
	printf("\n second polynomial \n");
	display(poly2);
	
}
void createlist(NODE *head)
{
	int n,i;
	NODE *last,*newnode;
	printf("\n How many node: ");
	scanf("%d",&n);
	last=head;
	for(i=1;i<=n;i++)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("\nEnter coefficient : ");
		scanf("%d",&newnode->coef);
		printf("\n Enter Coefficient: ");
		scanf("%d",&newnode->expn);
		last->next=newnode;
		last=newnode;
	}
}
void display(NODE *head)
{
	NODE *temp;
	for(temp=head->next; temp!=NULL; temp=temp->next)
		printf("%dx^%d \t",temp->coef,temp->expn);
}
