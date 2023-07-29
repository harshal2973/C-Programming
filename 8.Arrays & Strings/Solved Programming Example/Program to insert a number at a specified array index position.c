#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a[10];
    int i,n,x,pos;

    printf("Give value of n(not more than 10)\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Give number\n");
        scanf("%d",&a[i]);
    }
    printf("Which number to be inserted?\n");
    scanf("%d",&x);
    printf("At what index value(<10 & must be between 0 and %d?\n)",n-1);
    scanf("%d",&pos);
    if(pos<0||pos>n-1)
    {
        printf("Wrong Input\n");
        return 1;
    }
    for(i=n;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=x;
    n=n+1;
    printf("Array after insertion of %d at index %d\n",x,pos);
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
 return 0;
}
