#include<stdio.h>
int main()
{
	int i,n,search;
	int a[10],flag=0;
	printf("How many array element you want =\n");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d elements of array=%d\n",i,a[i]);
	}
	printf("search the array elemts=");
	scanf("%d",&search);
	if(a[i]!=search)
	flag=1;
	else
	flag=0;
	printf("%d Element is found at %d loaction",search,i);		
	return 0;
}
