#include<stdio.h>
#include<conio.h>

int sum_digits(int num)
{
    int sum=0;
    while(num>0)
    {
        sum=(sum+(num%10));
        num=num/10;
    }
    return sum;
}
int main()
{
    printf("%d\n",sum_digits(123));
    printf("%d\n",sum_digits(4523));
}

