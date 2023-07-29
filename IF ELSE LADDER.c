//Program to check number is positive negative or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("Positive");
    }
    else if(a < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
return 0;
}
