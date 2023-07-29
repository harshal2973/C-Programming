
//Program to print numbers 1 to n using for loop.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
          for(i=1;i<=n;i++)
          {
              printf("%d\n",i);
          }
return 0;
}

/*
//Program to find factors of a number using for loop.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n to find factors=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
          {
              if(n%i==0)
                 printf("%d,",i);
          }
return 0;
}
*/
/*
//Program to check given number is perfect or not using for loop.
#include<stdio.h>
int main()
{
    int i,n,sum= 0;
    printf("Enter a number:");
    scanf("%d",&n);

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
return 0;
}
*/
