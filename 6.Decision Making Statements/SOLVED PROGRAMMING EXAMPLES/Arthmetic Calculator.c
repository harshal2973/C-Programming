#include<stdio.h>
#include<conio.h>
int main()
{
    int choice, x, y;
    float ans;
    printf("Menu Of Operation\n");
    printf("==================\n");
    printf("1   Addition\n");
    printf("2   Substraction\n");
    printf("3   Multiplication\n");
    printf("4   Division\n");
    printf("5   Modulo Division\n");
    printf("===================\n");
    printf("Give Your Choices: ");
    scanf("%d",&choice);
    printf("Give Two Numbers:");
    scanf("%d%d",&x,&y);
    switch(choice)
    {
    case 1:
        ans = x + y;
        break;
    case 2:
        ans = x - y;
        break;
    case 3:
        ans = x * y;
        break;
    case 4:
        if(y==0)
            printf("Division Not Possible\n");
        else
            ans = x / y;
        break;
    case 5:
        ans = x % y;
        break;
    default:
        printf("Wrong Choice\n");
         break;
     }
    if((choice != 4)&& (choice != 0))
        printf("Answer = %7.2f\n",ans);
return 0;
}
