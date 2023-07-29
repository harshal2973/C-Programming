#include<stdio.h>
#include<string.h>
void exch(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0;i<5;i++)
    {
        exch(&x[i],&x[9-i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",x[i]);

    }
}
