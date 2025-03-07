#include<stdio.h>
 int main()
{
	int n,i,a[i];
	int flag,search;
	printf("Enter the no what u want=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array element:");
		scanf("%d",&a[i]);
	} 
	printf("Array Elements are...\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	printf("search the array element you want=");
	scanf("%d",&search);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=search)
		{
		flag++;
		 
		}
		else
		
		if(flag=0)
		printf("%d Element present at %d location",search,i);
	}
	
}
