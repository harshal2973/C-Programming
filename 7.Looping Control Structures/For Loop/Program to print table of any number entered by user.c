#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("Table of %d is\n",num);
    printf("==============\n");
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
return 0;
}
