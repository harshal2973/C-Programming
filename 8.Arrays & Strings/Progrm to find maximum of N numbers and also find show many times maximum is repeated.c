#include<stdio.h>
int main()
{
    int a[100],n,max,i,count;
    printf("How many numbers?");
    scanf("%d",&n);
    printf("Enter numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    count=0;
    for(i=0;i<n;i++)
    {
        if(max==a[i])
            count++;
    }
    printf("Maximum = %d and is repeated %d times\n",max,count);

return 0;
}
