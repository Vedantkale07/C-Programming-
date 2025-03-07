#include<stdio.h>
struct city
{
	char c_name[10];
	int s_code;
};
int main()
{ 
   struct city c[10];
   int n,i;

   printf("How many cities you wants=");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	printf("\nENter the city name= and standerd code=");
   	scanf("%s %d",c[i].c_name,&c[i].s_code);
   }
   printf("\n\n cities Details \n");
   for(i=0;i<n;i++)
   {
   	printf("\nthe city name=%s and std code=%d",c[i].c_name,c[i].s_code);
   }
}
