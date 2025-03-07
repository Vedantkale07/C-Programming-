#include<stdio.h>
int main()
{
    int a[20][20];
    int n,i,j;
    printf("enter the number of vertex: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("the form %d to %d : ",i,j);
            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    {
      for(i=0;i<n;i++)
    {
        int indegree=0, outdegree=0;
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            if(a[i][j]==1)
                outdegree ++;
            if(a[j][i]==1)
                indegree ++;
        }
        printf("\nindegree of %d >>%d:",i,outdegree);
        printf("\n outdegree of %d >>%d\n",i,indegree);
        printf("\n");
    }
      
    }
}