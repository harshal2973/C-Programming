#include <stdio.h>
#include <stdlib.h>

void patt4(int);
void patt5(int);

int main()
{
    int n;
    printf("Enter Number of Lines\n");
    scanf("%d",&n);
    patt4(n);
    patt5(n);
    return 0;
}
void patt4(int n1)
{
    int i,j,k;
    for(i=n1;i>0;i--)
    {
        for(j=0;j<n1-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("%d ",n1);
        }

        printf("\n");
    }
}
void patt5(int n1)
{
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d ",n1);
        }

        printf("\n");
    }
}


