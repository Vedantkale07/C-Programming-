/*
12345
1234
123
12
1
12
123
1234
12345
*/
#include<stdio.h>
int pattern(int n)
{ 
    int i,j;
      for(i=n;i>1;i--)
    {
        printf("\n");
        for(j=1;j<=i;j++)
            printf("%d",j);
    } 
    for ( i = 1; i <= n; i++)
    {
        printf("\n");
         for(j=1;j<=i;j++)
         {
            printf("%d",j);
         }
                
    }
}
int main()
{
    int n;
    printf("Enter the n= ");
    scanf("%d",&n);

  pattern(n);
       
}