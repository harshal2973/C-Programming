#include<stdio.h>//header files

int main()//main part

//body
{
    int num1, num2 ;//intialization
    float answer;
    printf("Enter Number1: ");
    scanf("%d", &num1);

    printf("Enter Number2: ");
    scanf("%d", &num2);

    answer=num1/num2;
    printf("Ratio of Numbers are %f" , answer);//%f will give answer in float

return 0;//compulsary
}
