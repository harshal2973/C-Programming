#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n;
    k=1;
    printf("How many lines? ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");

    }
return 0;
}

