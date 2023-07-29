#include<stdio.h>
#include<conio.h>
void fun1();

int main()
{
    int i;
    for(i=1;i<=5;i++)
        fun1();
return 0;
}

void fun1()
{
    static int n=2;
    n=n*2;
    printf("n=%d\n",n);
}


