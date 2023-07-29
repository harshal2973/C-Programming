#include<stdio.h>
#include<conio.h>
#include<math.h>

int hcf(int x,int y);

int main()
{
    int a,b,c,h;
    printf("Enter 3 integers\n ");
    scanf("%d%d%d",&a,&b,&c);
    h=hcf(hcf(a,b),c);
    printf("HCF = %d\n",h);
return 0;
}

int hcf(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    return x;
}
