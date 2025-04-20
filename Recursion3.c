#include<stdio.h>

void reachHome(int start, int dest)
{
    printf("start %d destination %d",start,dest);

    if(start==dest)
            printf("reach the Destination...\n");
            return ;

            start ++;
            
            reachHome(start,dest);
    
}
int main()
{
    int dest,start;
    printf("enter the valuefor start: ");
    scanf("%d",&start);
    printf("Enter the destination: ");
    scanf("%d",&dest);

    reachHome(start,dest);
}