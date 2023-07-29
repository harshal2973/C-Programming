#include<stdio.h>
#include<conio.h>
void main()
{
    float num1,num2;
    printf("Enter One number\n");
    scanf("%f",&num1);
    printf("Enter Second number\n");
    scanf("%f",&num2);

    if(num1>num2)
        printf("%f is larger\n",num1);
    else
        printf("%f is larger\n",num2);

getch();
}
