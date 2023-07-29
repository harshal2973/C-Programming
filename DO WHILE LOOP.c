#include<stdio.h>
int main()
/*
//PROGRAM TO PRINT ODD NUMBERS BETWEEN 1 TO N USING DO WHILE LOOP.
{
    int i,n;
    i=1;
    printf("Enter a number:");
    scanf("%d",&n);

    do
    {
        if(i%2!=0)
        {
            printf("%d,",i);
        }
        i++;
    }
    while(i<=n);
return 0;
}
*/
/*
//PROGRAM TO FIND FACTORS OF A NUMBER USING DO WHILE LOOP.
{
    int i,n;
    i=1;
    printf("Enter a number:");
    scanf("%d",&n);

    do
    {
        if(n%i==0)
        {
            printf("%d,",i);
        }
        i++;
    }
    while(i<=n);
return 0;
}
*/

//PROGRAM TO PRINT REVERSE A NUMBER USING DO WHILE LOOP.
{
    int n;

    printf("Enter a number:");
    scanf("%d",&n);

    do
    {
        printf("%d",n%10);
        n/=10;
    }
    while(n!=0);
return 0;
}

