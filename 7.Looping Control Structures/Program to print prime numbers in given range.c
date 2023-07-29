#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int start,end,i,d,flag;
    printf("Give start and end range numbers\n");
    scanf("%d%d", &start,&end);
    printf("Prime Numbers are :\n");
    for(i=start;i<=end;i++)
    {
        flag=1;
        for(d=2;d<sqrt(i);d++)
            if(i%d == 0)
            {
            flag=0;
            break;
            }
        if(flag == 1)
            printf("%d ",i);
    }
return 0;
}

