#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,n,pos,x;
    printf("Enter how many values in array\n");
    scanf("%d",&n);
    printf("Enter %d values \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Which position value to be delete :");
    scanf("%d",&pos);

    printf("Your existing list is : \n ");
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    for(i=pos-1;i<n;i++)
        a[i]=a[i+1];
    printf("\nAfter deletion the list is : \n");
    for(i=0;i<n-1;i++)
        printf("%5d",a[i]);
return 0;
}
