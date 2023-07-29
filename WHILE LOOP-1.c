/*
//Program to find factors of a number using while loop.
#include<stdio.h>
int main()
{
    int i, n;
    i=1;

    printf("Enter n to find factors=");
    scanf("%d",&n);

    while(i<=n)
          {
              if(n%i == 0)
                 printf("%d,", i);
                 i++;
          }
return 0;
}
*/

//Program to print reverse a number using while loop.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);

          while(n!=0)
                {
                    printf("%d", n%10);
                    n=n/10;
                }
return 0;
}

