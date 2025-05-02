#include<stdio.h>
int main()
{
	int a[50],i,first,last,middle,n,search; 
	printf("Enter the elements you wants=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("\nENter the number you wants to search=");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
	
	 if (a[middle]< search)
	    first=middle+1;
	 else
	    if(a[middle]==search)
		{
			//display search ELement
			printf("\n%d is present at %d location.",search,middle+1);
			break;
		}
	else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
		printf("\n\t NUMBER  IS NOT FOUND..!!!\n\t %d is not present ",search);
		return 0;
}
