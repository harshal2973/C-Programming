#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter values of x and y\n");
    scanf("%d%d",&x,&y);
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d / %d = %d\n",x,y,x/y);
    printf("%d %% %d = %d\n",x,y,x%y);
return 0;
}

