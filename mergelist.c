#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
NODE *head1, *head2, *head3;

int main()
{
	int n, pos;
	NODE *head1, *head2, *head3;
	head1=(NODE *)malloc(sizeof(NODE));
	head1->next=NULL;
	head2=(NODE *)malloc(sizeof(NODE));
	head2->next=NULL;
	head3=(NODE *)malloc(sizeof(NODE));
	head3->next=NULL;
	
	printf("\nCreate first list\n");
	createlist(head1);
	
	printf("\n# sorted list 1 # \n");
	sortlist(head1);
	display(head1);
	
	printf("\ncreate second list\n");
	createlist(head2);
	printf("\n # sorted list # 2 \m");
	sortlist(head2);
	display(head2);
	
	merge(head1, head2, head3);
	printf("\n  # Merge list # \n");
	display(head3);
		
}

void sortlist(NODE *head)
{
	NODE *temp, *temp1;
	int num;
	for(temp=head->next; temp->next!=NULL; temp=temp->next)
	{
		for(temp1=temp->next; temp1!=NULL; temp1=temp1->next)
		{
			if(temp->info > temp1->info)
			{
				num=temp->info;
				temp->info=temp1->info;
				temp1->info=num;
			}
		}
	}
}

void merge(NODE *head1, NODE *head2, NODE *head3)
{
	NODE *t1=head1->next, *t2=head2->next, *last=head3, *newnode;
	while(t1!=NULL && t2!=NULL)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->next=NULL;
		if(t1->info < t2->info)
		{
			newnode->info=t1->info;
			t1=t1->next;
			
		}
		else
		{
			newnode->info=t2->info;
			t2=t2->next;
		}
		last->next=newnode;
		last=newnode;
	}
	while(t1!=NULL)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->info=t1->info;
		newnode->next=NULL;
		t1=t1->next;
		last->next=newnode;
		last=newnode;
	}
	while(t2!=NULL)
	{
		newnode=(NODE *)malloc(sizeof(NODE));
		newnode->info=t2->info;
		newnode->next=NULL;
		t2=t2->next;
		last->next=newnode;
		last=newnode;
	}
}
