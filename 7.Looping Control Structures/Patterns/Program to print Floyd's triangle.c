//Program to print Floyd's triangle.
#include<stdio.h>
int main()
{
    int i,j,k = 1;
    printf("Floyds Triangle is\n");
    for(i=1;k<=20;i++)
    {
        for(j=1;j<=i;++j)
            printf("%d ",k++);
            printf("\n\n");
    }
return 0;
}
