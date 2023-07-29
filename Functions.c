
//Program to add two number using  Function.
#include <stdio.h>
void add(int, int); // function declaration

void main()
{
    int a = 5, b = 6;
    add(a, b); // function call
}
void add(int x, int y) // function definition
{
    printf("Addition is = %d", x + y);
}

/*
//Program to find maximum number from given two numbers.
#include<stdio.h>
int max( int a, int b);
void main()
{
    int a = 100;
    int b = 200;
    int maxvalue;
    maxvalue = max(a, b);
    printf("Max value is : %d\n",maxvalue);
}
int max( int a, int b)
{
    if(a > b )
        return a; // return a
    else
        return b; // return b
}
*/
/*
//Program to calculate the Power of a Number.
#include<stdio.h>
int power( int , int );
void main()
{
    int num, pow, res;

    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Enter power of number : ");
    scanf("%d", &pow);
    res = power(num, pow);

    printf("%d's power %d = %d", num, pow,res);
}
int power( int n, int p)
{
    int r = 1;
    while(p >= 1)
        {
            r = r * n;
            p--;
        }
return r;
}
*/
/*
//Program to find Factorial of a Number.
#include<stdio.h>
int fact(int);
int main()
{
    int n, f;
    printf("Enter the number :\n");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial = %d",f);
}
int fact( int n)
{
    int i, fact = 1;
    for(i = 1 ; i <= n;i++)
        fact = fact * i;
    return fact;
}
*/
/*
//Program to check Number is Prime or not.
#include<stdio.h>
int checkPrime(int);
void main()
{
    int n1, prime;
    printf("Enter the number:");
    scanf("%d", &n1);
    prime = checkPrime(n1);
    if(prime == 1)
       printf("The number %d is a prime number.\n",n1);
    else
       printf("The number %d is not a prime number.\n",n1);
}
int
checkPrime( int n1)
{
    int i = 2;
    while(i <= n1 / 2)
    {
        if(n1 % i == 0)
           return 0;
        else
           i++;
    }
    return 1;
}
*/
