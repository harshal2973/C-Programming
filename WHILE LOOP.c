
//Program to print number from 1 to 10 using while loop.
#include<stdio.h>
int main()
{
    int i, n;
    i=1;
    printf("Enter Number n:");
    scanf("%d",&n);
    while(i <= n)
        {
            printf("%d\n", i);
            i=i+1;
        }

return 0;
}

/*
//Program to print multiplication table using while loop.
#include<stdio.h>
int main()
{
    int i, n;
    i=1;

    printf("Enter n for multiplication table:");
    scanf("%d",&n);

    while(i<=10)
        {
           printf("%d * %d == %d\n",n,i,n*i);
            i++;
        }
return 0;
}
*/
/*
//Program to find Sum of 5 numbers entered by user using While loop.
#include<stdio.h>
int main()
{
    int sum,i,n;
    sum=0;
    i=1;

    while(i<=5)
        {
            printf("Enter a number=");
            scanf("%d",&n);
            sum=sum+n;
            i++;
        }

    printf("Sum is=%d", sum);
return 0;
}
*/
