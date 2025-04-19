#include<stdio.h>
int i,j,n,temp=0;

void insertionsort(int a[],int n)
{
    
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }
    printf("sorted Array..!!!\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}

void main()
{
    int n;
    int a[20];
    printf("\nEnter the size of array= ");
    scanf("%d",&n);
    printf("\n Enter the elements of array =");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);

      insertionsort(a,n);
    
}
