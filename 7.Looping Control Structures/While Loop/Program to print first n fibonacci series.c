#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3,n;
    int count;
    num1=0;
    num2=1;
    printf("How many fibonacci numbers?\n");
    scanf("%d",&n);
           if(n>2)
           {
               printf("The fibonacci numbers are\n");
               printf("%5d%5d",num1,num2);
               count=2;
                   while(count<n)
                   {
                       num3=num1+num2;
                       printf("%5d",num3);
                       num1=num2;
                       num2=num3;
                       count++;
                   }
           }
           else
            printf("By definition first two numbers are 0 1\n");
return 0;
}
