/*
1
13
135
1357
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("How many lines?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
            printf("%d",2*j-1);
        printf("\n");
    }
return 0;
}
