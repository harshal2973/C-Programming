//Program to print pythagorian triplet between 1 and 25.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=23;i++)
    {
        for(j=i+1;j<=24;j++)
        {
            for(k=j+1;k<=25;k++)
            {
                if (i*i+j*j == k*k)
                    printf("%2d %2d %2d\n",i,j,k);
            }
        }
    }
return 0;
}
