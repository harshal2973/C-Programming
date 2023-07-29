//Program to print all integers between starting and ending range divisible by 11.
#include<stdio.h>
#include<conio.h>
int main()
{
    int start,end,temp;
    int divisor;
    divisor=11;
    printf("Give starting range\n");
    scanf("%d",&start);
    printf("Give ending range\n");
    scanf("%d",&end);
    if (end<start)
    {
        temp=start;
        start=end;
        end=temp;
    }
    printf("Numbers divisible by %d between %d and %d are\n",divisor,start,end);
    do
    {
        if(start % divisor == 0)
            printf("%4d", start);
            start++;
    }
    while(start <= end);
return 0;
}
