#include <stdio.h>
#include <stdlib.h>

void patt1(int);
void patt2(int);
void patt3(int);
void patt4(int);
void patt5(int);
void patt6(int);

int main()
{
    int n;
    printf("Enter Number of Lines\n");
    scanf("%d",&n);
    //patt1(n);
   // patt2(n);
    //patt3(n);
    //patt4(n);
    //patt5(n);
    patt6(n);
    return 0;
}
void patt1(int n1)
{
    int i,j;
    for(i=n1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}
void patt2(int n1)
{
    int i,j;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",65+i);
        }
        printf("\n");
    }
}
void patt3(int n1)
{
    int i,j,k=1;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
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
            printf("%c",'*');
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
            printf("%c ",'*');
        }

        printf("\n");
    }
}
void patt6(int n1)
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
            printf("%d",i+1);
        }

        printf("\n");
    }
}
