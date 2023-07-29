#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    int i,num;
    printf("Give Integer number : ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        i = n % 10;
        sum = sum + i*i*i;
        n = n / 10;
    }
    if(sum == num)
        printf("Given number %d is armstrong\n",num);
    else
        printf("Given number %d is not armstrong\n",num);
return;
}
