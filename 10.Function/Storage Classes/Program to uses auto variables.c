#include<stdio.h>
#include<conio.h>
void fun1();

int main()
{
    auto int a=100;
    fun1();
    printf("%d\n",a);
return 0;
}

void fun1()
{
    auto float a=25.5;
    printf("%f\n",a);
}

