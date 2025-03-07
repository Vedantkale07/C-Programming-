#include<stdio.h>
int n;
void display(int a[20])
{
	int i;
	printf("\n Array Element:");
	for(i=0;i<n;i++)
	printf("\t%d",a[i]);
}
void insertionsort(int a[20])
{
	int i,key,j;
	for(i=1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0 && a[j]>key;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=key;
	}
	
}
void bubblesort(int a[20])
{
	int pass,i,temp;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
main()
{
	int i,a[20],pid,Barr[20],Iarr[20];
	printf("\n Enter value of n");
	scanf("%d",&n);
	printf("\n Enter arrray Elements");
	for(i=0;i<n;i++)
	{
		printf("\n Enter Element:",i);
		scanf("%d",&a[i]);
		Barr[i]=a[i];
		Iarr[i]=a[i];
	}
	display(a);
	pid=fork();
	if(pid==0)
	{
		printf("\n Child Process id=%d",getpid());
		insertionsort(Iarr);
		printf("\n Insertion Sort");
		display(Iarr);
	}
	else if(pid>0)
	{
		wait(NULL);
		sleep(5);
		printf("\n Parent Process id=%d",getpid());
		bubblesort(Barr);
		printf("\nBubbleSort");
		display(Barr);
	}
}
