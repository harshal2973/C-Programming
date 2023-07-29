#include<stdio.h>
int main()
/*

//PROGRAM TO PRINT ODD NUMBERS BETWEEN 1 TO N USING GOTO STATEMENT.
{
    int i,n;
    i=1;
    printf("Enter a number:");
    scanf("%d",&n);

    odd:
    {
        if(i%2!=0)
        {
            printf("%d,",i);
        }
        i++;
    }
    if (i<=n)
    {
        goto odd;
    }
return 0;
}
*/

//PROGRAM TO FIND FACTORS OF A NUMBER USING GOTO STATEMENT.
{
    int i,n;
    i=1;
    printf("Enter a number:");
    scanf("%d",&n);

    odd:
    {
        if(n%i==0)
        {
            printf("%d,",i);
        }
        i++;
    }
    if (i<=n)
    {
        goto odd;
    }
return 0;
}

