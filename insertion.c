 #include<stdio.h>
 
 int i,j,n,temp=0;
 
insertionsort(int a[],int n)	
{
		for(i=1;i<n;i++)
 	    {
 		  temp=a[i];
 		  j=i-1;
 		 while(j>=0 && a[j]>temp)
 		 {
		  a[j+1]=a[j];
 		  j--;
 	     }
 	      a[j+1]=temp;
	  }
	  printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
 {
 	int n,a[20],i;
 	printf("Enter the n number=");
 	scanf("%d",&n);
 	printf("Enter the aray elemets:\t");
 	for(i=0;i<n;i++)
    	{
 			scanf("%d",&a[i]);
	    }
	    insertionsort(a, n);
	    return 0;
	}
    
