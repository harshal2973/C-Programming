#include<stdio.h>
#include<conio.h>
 int main()
{
    int i,sum=0;
    /* For Loop*/
    for(i=1;i<=100;i++)
        sum=sum+i;
    printf("%d\n",sum);
    /* While loop*/
    i=1;
    sum=0;
    while(i<=100)
    {
        sum=sum+i;
        i++;
    }
    printf("%d\n",sum);
    /* Do-While loop*/
    i=1;
    sum=0;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=100);
    printf("%d\n",sum);
return 0;
}
