#include<stdio.h>
#include<conio.h>

int max(int,int,int);

int main()
{
    int i,j,k;
    int ans;
    char ch='y';
    while(ch == 'y')
    {
    printf("Give three integer numbers\n");
    scanf("%d %d %d",&i,&j,&k);
    ans=max(i,j,k);
    printf("Largest of %d,%d and %d = %d\n",i,j,k,ans);
    fflush(stdin);
    printf("Do you want to continue?(y/n)\n");
    scanf("%c",&ch);
    }
return 0;
}

int max(int a,int b,int c)
{
    int large;
    large=a;
    if(b>large)
        large=b;
    if(c>large)
        large=c;
    return large;
}
