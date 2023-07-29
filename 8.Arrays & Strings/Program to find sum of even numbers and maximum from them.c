#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];  //Array of size 10 defined
    int i,n;
    int sum=0,max=0;    //initialize counts

    printf("How many numbers? ");
    scanf("%d",&n); //actual array size in n

    for(i=0;i<n;i++)
    {
    printf("Give number ");
    scanf("%d", &a[i]);
    if(a[i]%2 == 0)
    {
        sum=sum+a[i];
        if(max<a[i])
            max=a[i];
    }
    }
    printf("Sum of even numberss = %d and maximum = %d",sum,max);
}
