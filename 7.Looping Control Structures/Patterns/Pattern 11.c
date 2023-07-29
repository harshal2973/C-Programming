/*
Pattern 11
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ",j);
        }
        for(k=1;k<=i;k++)
        {
            printf(" %d",k);
        }
        printf("\n");
    }


    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i+1;j--)
            printf(" ",k);
        for (k=1;k<=i;k++)
            printf(" %d",k);
        printf("\n");
    }
}
