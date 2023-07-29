#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("Give number to be checked for perfect\n");
    scanf("%d", &n);
    for(i=1;i<n;i++)
    {
        if(n%i == 0)
        sum += i;
    }
    if(sum == n)
        printf("Given number %d is perfect\n",n);
    else
        printf("Given number %d is not perfect\n",n);
return 0;
}
