#include<stdio.h>

int main()
{
    int i,n;
    int a[50];
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    printf("Enter the Arrya elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            int temp;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}