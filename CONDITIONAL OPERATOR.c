//Program to check largest number from two number using conditional operator.
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    printf("%d is largest.",max);
return 0;
}
