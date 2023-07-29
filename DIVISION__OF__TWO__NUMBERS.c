#include<stdio.h>//header files

int main()//main part

//body
{
    float num1, num2, answer;//intialization

    printf("Enter Number1: ");
    scanf("%f", &num1);

    printf("Enter Number2: ");
    scanf("%f", &num2);

    answer= num1 / num2;
    printf("Ratio of Numbers are %f" , answer);//%f will give answer in float

return 0;//compulsary
}

