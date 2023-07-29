#include<stdio.h>
#include<conio.h>

int sum(int a, int b); //declaration

int main()
{
    int i,j,ans;
    printf("Give two integer numbers\n");
    scanf("%d %d",&i,&j);
    ans=sum(i,j);   //call sum
     printf("Sum of %d and %d = %d\n",i,j,ans);
return 0;
}

int sum(int a,int b)
{
    return a+b;
}
