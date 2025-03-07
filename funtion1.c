#include<stdio.h>
int   add(int n)
{
    if(n!=0){
    return(n+(n-1));
    }
    else{
       
    }
}
int main()
{
    int n;
    printf("Enter the vaue of n ");
    scanf("%d",&n);  
    int sum=add(n);
    printf("sum is:%d ",add);
}