#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n;
    int *ptr;
    ptr=a;
    printf("How many numbers?\n");
    scanf("%d",&n);
    printf("Give numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=a;
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
return 0;
}
