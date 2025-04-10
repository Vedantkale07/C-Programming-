#include<stdio.h>

int count (int n)
{
    // base condition
    if(n==0)
        return 0;

         count(n-1); 
          printf("%d\t",n);
   
}
int main()
{
  int n, ans;
    printf("Enter the no you want to count : ");
    scanf("%d",&n);

   ans= count(n);
}