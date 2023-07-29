#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int start,end,i,d;
    int temp,sum=0;
    printf("Give start and eend range numbers\n");
    scanf("%d%d",&start,&end);
    printf("Armstrong numbers are :\n");
    for(i=start;i<=end;i++)
    {
        temp=i;
        sum=0;
        do
        {
            d=temp%10;
            sum=sum+d*d*d;
            temp=temp/10;
        }
        while (temp!=0);
        if(i==sum)
            printf("%d ",i);
    }
return 0;
}
