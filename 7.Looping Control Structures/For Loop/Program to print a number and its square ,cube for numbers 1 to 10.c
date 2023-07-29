//Program to print a number and its square ,cube for numbers 1 to 10.c
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int sq,cu;
    printf("Number\tSquare\tCube\n");
    printf("======\t=======\t======\n");
    for(i=1;i<=10;i++)
    {
        sq = i*i;
        cu = sq*i;
        printf("%d\t%d\t%d\n",i,sq,cu);
    }
return 0;
}


