/*
Pattern-1:
12345
1234
123
12
1
.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("How many lines?");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
            printf("%d",j);
        printf("\n");
    }
return 0;
}
