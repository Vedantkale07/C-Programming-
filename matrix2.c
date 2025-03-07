#include<stdio.h>
int main()
{
	int i,j,sumRow,sumCol;
	int a[10][10];
	printf("enter the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("ENter matrix:\n");
   for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		sumRow=0,sumCol=0;
		for(j=0;j<3;j++)
		{
			sumRow=sumRow+a[i][j];
			sumCol=sumCol+a[j][i];
			
		}
		printf("\nsumRow %d =%d  sumCol %d =%d",i,sumRow,i,sumCol);
	}
	
}
