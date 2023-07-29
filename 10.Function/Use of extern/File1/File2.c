#include<stdio.h>
extern int a;
void fun()
{
    a=a+10;
    printf("Value of a = %d\n",a);
}
