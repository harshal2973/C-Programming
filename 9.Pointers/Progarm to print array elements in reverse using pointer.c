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
    ptr=a+n-1;
     printf("Array elements in reverse are:\n");
    while(ptr>=a)
    {
        printf("%d\n",*ptr);
        ptr--;
    }
return 0;
}
