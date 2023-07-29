#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    int mul,div;
    printf("Give one integer number\n");
    scanf("%d",&x);
    mul=x<<1;
    div=x>>1;
    printf("Multiplication of %d by 2 = %d\n",x,mul);
    printf("Division of %d by 2 = %d\n",x,div);
return 0;
}
