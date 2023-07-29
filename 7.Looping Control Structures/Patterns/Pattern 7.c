
/*
    5
   54
  543
 5432
54321
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
        for(k=5;k>=j;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
