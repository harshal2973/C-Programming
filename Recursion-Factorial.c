//Program to find factorial of given number using Recursion.
#include<stdio.h>
int fact(int);
void main()
{
    int n, f;
    printf("Enter the number?\n");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial = %d", f);
}
int fact( int n)
{
    if(n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
