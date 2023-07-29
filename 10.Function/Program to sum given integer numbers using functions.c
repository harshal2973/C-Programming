#include<stdio.h>
#include<conio.h>

void sum(int a, int b); //declaration

int main()
{
    int i,j;
    printf("Give two integer numbers\n");
    scanf("%d %d",&i,&j);
    sum(i,j);   //call sum
return 0;
}

void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("Sum of %d and %d = %d\n",a,b,c);
}
