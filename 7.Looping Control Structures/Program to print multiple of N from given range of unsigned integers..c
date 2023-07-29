#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    int start,end;
    int temp,num;
    printf("Give value of n\n");
    scanf("%d", &n);
    printf("Give start and end\n");
    scanf("%d %d", &start,&end);
    temp=start/n;
    num=temp*n;
    if(num<start)
        num=num+n;
    while(num<=end)
    {
        printf("%d ",num);
        num=num+n;
    }
return 0;
}
