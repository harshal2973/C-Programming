#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a[10];
    int i,n,x;

    printf("Give value of n(not more than 10)\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Give number\n");
        scanf("%d",&a[i]);
    }
    printf("Which number to be searched?\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d found at position %d\n",x,i+1);
            break;
        }
    }
    if(i==n)
        printf("%d not in list\n",x);
return 0;
}
