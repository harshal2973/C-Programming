#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    int i=1;
    printf("Give Integer Number:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d numbers = %d\n",n,sum);
return 0;
}

