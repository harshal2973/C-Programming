#include<stdio.h>
int main()
{
    int x;

    for( x=1;x<=10;x++)
    {


    int i,n,sum= 0;
    n=x;

    for( i=1;i<n;i++)
        {
            if(n%i==0)
               {
                   printf("%d+",i);
                   sum=sum+i;
               }
        }
        printf("=%d",sum);
               if(sum==n)
                  printf("\n%d is a perfect number",n);
               else
                  printf("\n%d is not a perfect number",n);
    }
return 0;
}
