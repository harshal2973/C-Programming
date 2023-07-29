#include<stdio.h>
#include<conio.h>

long int fact(int n);   //prototype of function

int main()
{
    int m;
    long int ans;   //long int store large numbers
    printf("Give number\n");
    scanf("%d",&m);
    ans=fact(m);    //Function call
    printf("Factorial = %ld",ans);
return 0;
}

long int fact(int n)    //Function body
{
    if(n==1)    //condition to terminate recursion
        return 1;
    else
        return n*fact(n-1);   //recursion here.fact() calls fact() internally
}
