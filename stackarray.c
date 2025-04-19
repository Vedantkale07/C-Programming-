//static implementation of stack

#include<stdio.h>

int stack[100],x,top,choice,i,n;
void push(void);
void pop(void);
void display(void);

int main()
{
	top=-1;
	printf("\n\t Enter the size of stack :");
	scanf("%d",&x);
	printf("\n\t------------------------------");
	printf("\n\t1.PUSH()\n\t2.POP()\n\t3.DISPLAY()\n\t4.Exit");
	do
	{
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nExit");
				break;
			default:
				printf("\nPlease enter valid choice..!!!");
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("\n stack is overflow ");
		
	}
	else
	{
		printf("\nEnter the value  to Pushed: ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\nStack is Underflow/Empty");		
	}
	else
	{
		printf("\n the pop element is :%d",stack[top]);
		top++;	
		
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n The Element Of Stack Is \n");
		for(i=top;i>=0;i--)
			printf("%d",stack[i]);
		printf("\n Press the Next Choice");
	}
	else 
	printf("\n The Stack Is Empty ");	
	
}


