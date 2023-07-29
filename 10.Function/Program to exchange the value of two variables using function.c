
#include<stdio.h>
#include<conio.h>

void exch(int a,int b) //a & b formal parameters
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Printing from inside exch function\n");
    printf("a=%d b=%d\n",a,b);
}

int main()
{
    int x,y;    //local variables
    printf("Give value of x and y\n");
    scanf("%d %d",&x,&y);
    exch(x,y);//call by value.x & y actual parameter.
    printf("Printing from main function\n");
    printf("x=%d y=%d\n",x,y);
return 0;
}
