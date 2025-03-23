// Call by referanace

#include<stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return ;
}
int main()
{
    int a=20,b=40;
    printf("%d & %d\n",a,b);
    
    swap(&a,&b) ;
    printf("%d & %d",a,b);
    return 0;
}