#include<stdio.h>
#include<conio.h>

long int fact(int n);

int main()
{
    int n,r;
    long int ans;
    printf("Enter values of n & r\n");
    scanf("%d%d",&n,&r);
    if(n<0 || r<0 || n<r)
        printf("Invalid input\n");
    else
    {
        ans = (fact(n)/(fact(r)*fact(n-r)));
        printf("Answer = %ld",ans);
    }
return 0;
}

long int fact(int n)
{
    if(n==0)    //condition to terminate recursion
        return 1;
    else
        return n*fact(n-1);   //recursion here.fact() calls fact() internally
}
