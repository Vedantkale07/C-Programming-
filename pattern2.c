#include<stdio.h>
int pattern_no(int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("\n");
        for(int j=1;j<=i;j++)
        printf("%d",j);
    }
}
int star(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        printf("*",j);
    }
}
int main()
{
    int n,i,j;
    printf("Enter the no=");
    scanf("%d",&n);
   
   pattern_no(n);

   star(n);

}