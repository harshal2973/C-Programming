/*
Pattern-2:
*****
****
***
**
*

*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    n=5;
    for(i=n;i>=0;i--)
    {
        for (j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
return 0;
}

