#include<stdio.h>
#include<conio.h>
int *large(int a,int b);
int main()
{
    int x,y,*ptr;
    printf("Give two numbers ");
    scanf("%d%d",&x,&y);
    ptr=large(x,y);
    printf("Larger of %d and %d is %d\n",x,y,*ptr);
return 0;
}

int *large(int a,int b)
{
    int *p,*q;
    p=&a;
    q=&b;
    if(*p>*q)
        return p;
    else
        return q;
}
