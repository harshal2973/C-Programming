//Program To Print First n Numbers Using goto Statement.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int i=1;
    printf("Give Integer Number:  ");
    scanf("%d", &n);
    loop:  //Identifier For Goto
        if(i<=n)
        {
            printf("Number = %d\n",i);
            i++;
            goto loop; // goto here. backward reference
        }
return 0;
}

//Program to print sum of first n integer numbers using goto statement.
/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    int i=1;
    printf("Give Integer Number:  ");
    scanf("%d", &n);
    loop:  //Identifier For Goto
        if(i<=n)
        {
            sum=sum+i;
            i++;
            goto loop; // goto here. backward reference
        }
    printf("Sum of first %d integers = %d\n",n,sum);
return 0;
}
*/

