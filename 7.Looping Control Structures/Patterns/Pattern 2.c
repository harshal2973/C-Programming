/*
Pattern-2:
1
12
123
1234
12345
.
.
.
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
            printf("%d",j);
        printf("\n");
    }
return 0;
}
