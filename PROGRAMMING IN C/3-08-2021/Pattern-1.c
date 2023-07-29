#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    printf("How many lines?");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",j+65);
            printf(" ");
        }
        printf("\n");
    }
return 0;
}


