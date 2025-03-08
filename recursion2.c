#include<stdio.h>

int power(int n)
{
    // base condition
    if(n==0)
        return 1;
    
    // recursive relation
     return 2* power(n-1);
}
int main()
{
  int n, ans;
    printf("Enter power of 2 : ");
    scanf("%d",&n);

   ans= power(n);

   printf(" 2 power of %d is %d \n",n,ans);
    return 0;
}