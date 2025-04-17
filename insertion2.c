#include<stdio.h>

int n,i,j,a[50],temp;

int insertion(int a[],int n)
{
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=j-1;
		while(j>=0 &&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
			
		}
		a[j+1]=temp;
	}
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
{
	printf("How many Elements you want=");
	scanf("%d",&n);
	printf("ENter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	insertion(a,n);
	return 0;
}
