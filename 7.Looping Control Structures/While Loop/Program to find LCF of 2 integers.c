#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,m,i;
    i=1;
    printf("Enter 2 Integers Numbers:");
    scanf("%d%d",&a,&b);
    m=a;
    while(m%b!=0)
    {
        i++;
        m=a*i;
    }
    printf("LCF of %d & %d = %d\n",a,b,m);
return 0;
}
