/*IF STATEMENT*/

/*
Syntax:
if(condition)
{
    statement 1;
}
*/

//Program To Print 'Zero' If Entered Number Is 0.
/*
#include<stdio.h>
int main()
{
    int a;

    printf("Enter Number:");
    scanf("%d", &a);

    if(a == 0)//No Semicolon
    {
        printf("Zero");
    }
return 0;
}
*/

//Program To Find Entered Number Is Negative Or Positive.
/*
#include<stdio.h>
int main()
{
    int a;

    printf("Enter Number:");
    scanf("%d", &a);

    if(a >= 0)
    {
        printf("Positive Number");
    }
    if(a < 0)
    {
        printf("Negative Number");
    }
return 0;
}
*/

//Program To Find Entered Number Is Even Or Odd.

#include<stdio.h>
int main()
{
    int a;

    printf("Enter Number:");
    scanf("%d", &a);

    if(a%2 == 0)
    {
        printf("Even Number");
    }
    if(a%2 != 0)
    {
        printf("Odd Number");
    }
return 0;
}


