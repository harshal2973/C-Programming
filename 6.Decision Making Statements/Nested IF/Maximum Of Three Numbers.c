#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    int max;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2)
    {
        if(num1>num3)
            max=num1;//num1 is largest
        else
            max=num3;//num3 is largest
    }
    else
    {
        if(num2>num3)
            max=num2;//num2 is largest
        else
            max=num3;//num3 is largest
    }
    printf("Maximum of %d, %d and %d is = %d\n ",num1,num2,num3,max);

getch();
}
