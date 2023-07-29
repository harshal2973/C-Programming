#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,max,min;
    printf("Give two integer  numbers\n");
    scanf("%d%d",&x,&y);
    max=(x>y)?x:y;
    min=(x<y)?x:y;
    printf("Maximum of %d and %d is =  %d\n",x,y,max);
    printf("Minimum of %d and %d is =  %d\n",x,y,min);
return 0;
}
