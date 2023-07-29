#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count,n,sum=0;
    printf("How many first odd numbers to sum?\n");
    scanf("%d", &n);
    i=1;
    count=0;
    while(count<=n)
    {
        if(i % 2 == 1)
        {
            sum+=i;
            i+=2;
            count++;
        }
    }
printf("Sum of first %d odd numbers = %d\n",n,sum);
return 0;
}
