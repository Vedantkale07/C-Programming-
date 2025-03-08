#include<stdio.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    
    int smallproblem = factorial(n-1);
    
printf("\nsmallProblem is%d\n: ",smallproblem);
    int  bigproblem= n* smallproblem;

printf("\nbigbrobem is%d\n: ",bigproblem);

    return bigproblem;
}
int main()
{
    int n, ans;
    printf("Enter the no you want factorial of it: ");
    scanf("%d",&n);

   ans= factorial(n);

   printf(" Factorial of %d is %d\n",n, ans);
  
    return 0;
}