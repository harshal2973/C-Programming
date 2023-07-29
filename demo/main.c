#include <stdio.h>
#include <stdlib.h>
int sumofarray(int);
int ispresent(int*,int,int);

int main()
{
    int n;
    n=50;
    printf("\nSum of all elements of array is %d",sumofarray(n));
}
int sumofarray(int a)
{
    int i,n,sum,x,ans;
    sum=0;
    printf("Enter how many elements ");
    scanf("%d",&n);
    int A[a];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    printf("Enter element to be searched in array\n");
    scanf("%d",&x);
    ans=ispresent(A,x,n);
    if(ans=1)
    {
        printf("%d is present in an array",x);
    }
    else
    {
        printf("%d is not present in an array",x);
    }
    return sum;
}
int ispresent(int *p,int a,int b)
{
    int i;
    for(i=0;i<b;i++)
    {
        if(*(p+i) == a)
        {
            return 1;
        }
    }
    return 0;
}
