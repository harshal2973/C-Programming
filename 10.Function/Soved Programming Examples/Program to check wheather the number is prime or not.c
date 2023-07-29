#include<stdio.h>
#include<conio.h>
int isprime(int num);
int main()
{
    int n;
    printf("Give number\n");
    scanf("%d",&n);
    if (isprime(n))
        printf("%d is prime",n);
    else
        printf("%d is not prime",n);
return 0;
}

int isprime(int num)
{
    int i;
    for(i=2;i<num;i++)
        if(num%i==0)
        return 0;
    return 1;
}
