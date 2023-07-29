#include<stdio.h>
#include<conio.h>
void even(int a,int n);

int main()
{
    int n;
    printf("Give value of n ");
    scanf("%d",&n);
    even(0,n);
return 0;
}
void even(int a,int n)
{
    if(a<=n)
    {
        printf("%d ",a);
        even(a+2,n);
    }
    else
        return;
}

