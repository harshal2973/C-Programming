#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count,n,sum=0;
    printf("How many first even numbers to sum?\n");
    scanf("%d", &n);
    i=2;
    count=0;
    while(count<n)
    {
        if(i % 2 == 0)
        {
            sum+=i;
            i+=2;
            count++;
        }
    }
printf("Sum of first %d even numbers = %d\n",n,sum);
return 0;
}

