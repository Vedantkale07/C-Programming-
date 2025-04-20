#include<stdio.h>
int main()
{
    int a[10],i,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    {
  scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        int temp;
        for(j=0;i<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    

}