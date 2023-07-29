#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];   //array  of size 10 defined
    int i,j,n,temp;

    printf("Give value of n(not ,more than 10)\n");
    scanf("%d",&n); //actual array size in n
    for(i=0;i<n;i++)    //input data
    {
        printf("Give number\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])   //exchange two numbers
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order data is :\n");
    for(i=0;i<n;i++)    //print from first to last
        printf("%4d",a[i]);
    printf("\nDescending order data is :\n");
    for(i=n-1;i>=0;i--)    //print from last to first
        printf("%4d",a[i]);
return 0;
}
