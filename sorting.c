#include<stdio.h>
void main()
{
	int i,j,temp,n,number[30];
	printf("Enter the value of N \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	
    	scanf("%d",&number[30]);
    }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(number[i] > number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	
	printf("The numbers arrange in assending order \n");
	for(i=0;i<n;i++)
	printf("%d\n",number[i]);
	
	
}
