#include<stdio.h>
void mergesort(int a[],int low,int high);
void merge(int a[], int low ,int mid,int high);
int a[29],b[30],high,low;

int main(void)
{
	int j,i,n;
	printf("How many  array elements you wants:");
	scanf("%d",&n);
	printf("ENter array elements:");
	for(i=0;i<n-1;i++)
	   scanf("%d",&a[i]);
	
	
	low=0;
	high=n-1;
	
	mergesort(a,low,high);
	
	printf("sorted Array...!!!\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
		
	}
}
void merge(int a[], int low ,int mid,int high)
{
	int j,i,k;
	i=low;
	j=high;
	k=0;
	while(i<=mid && j<=high)
	{
		if (a[i]<=a[j])
		{
		b[k]=a[i];
		k=k+1;
		i=i+1;
		}
		else
		{
		b[k]=a[j];
		k=k+1;
		j=j+1;
	  }
    
	while(i<=mid)
    {
			b[k]=a[i];
    	    k=k+1;
	        i=i+1;
    }
    while(j<=high)
      {
      	b[k]=a[j];
      	k=k+1;
      	j=j+1;
      	
	  }
	  j=low;
	  k=0;
	  while(j<=high)
	  {
	  
	  a[j]<b[k];
	  k=k+1;
	  j=j+1;
      }
  }
}
