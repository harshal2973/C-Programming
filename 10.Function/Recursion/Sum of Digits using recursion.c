#include<stdio.h>
#include<conio.h>

int sumofdigit(int x);

int main()
{
    int n,sum;
    printf("Enter number\n");
    scanf("%d",&n);
    sum=sumofdigit(n);
    printf("Sum = %d\n",sum);
return 0;
}

//Recursive function sum of digits
int sumofdigit(int x)
{
    int s=0,d;
    if(x==0)
        return 0;
    d=x%10;
    s=s+d+sumofdigit(x/10);
    return s;
}
