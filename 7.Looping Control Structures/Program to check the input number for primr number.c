#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int i,j,n;
    printf("Give value of n\n");
    scanf("%d", &n);
    j=sqrt(n);
    for(i=2;i<=j;i++)
    {
        if(n%i == 0)
        break;
    }
    if(i<j)
        printf("Number %d is prime\n",n);
    else
        printf("Number %d is not prime\n",n);
}
