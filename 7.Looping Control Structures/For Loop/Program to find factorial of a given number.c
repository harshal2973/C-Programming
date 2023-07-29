//Program to find factorial of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    long int fact;
    printf("Give positive number for which factorial is to be found\n");
    scanf("%d", &n);
    if(n<0)
        printf("Factorial of -ve number not defined\n");
    else
    {
        fact=1;
        for(i=1;i<=n;i++)
            fact=fact*i;
        printf("Factorial of %d = %ld\n",n,fact);
    }
return 0;
}
