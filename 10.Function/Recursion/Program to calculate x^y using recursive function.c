#include<stdio.h>
#include<conio.h>

int power(int a,int b);

int main()
{
    int x,y;
    int ans;
    printf("Enter Two Numbers\n");
    scanf("%d%d",&x,&y);
    ans=power(x,y);
    printf("%d ^ %d = %d",x,y,ans);
return 0;
}

int power(int a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}
