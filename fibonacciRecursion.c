//fibonacci series
//(n)=(n-1)+n(-2)

//1= 0+0 =0       7= 5+3= 8                                           
//2= 1+0 =1       8= 8+5= 13   
//3= 1+0 =1       9= 13+8 = 21
//4= 1+1 =2
//5= 2+1 =3
//6= 3+2 =5

#include<stdio.h>

int fib(int n){
    if( n == 1)
    {
        return 0;
    }
    if(n ==2)
    {
        return 1;
    }
    printf("Numbers: ",n);
     return fib(n-1) + fib(n-2);
    

}
int main()
{
    int n,ans;
    printf("Enter the n no:");
    scanf("%d",&n);

    ans=fib(n);
     printf("\n%d",fib(n));
}