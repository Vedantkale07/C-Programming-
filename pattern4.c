#include<stdio.h>
int main()
{ int j;
    for(int i=0;i<5;i++)
    {
        for( j=i;j<5;j++)
        {
            printf("* ");
        }
        printf(" \n");
    }
}