#include<stdio.h>//header files
#include<math.h>//header files
/*Write a program to that performs as calculator
 ( addition, multiplication, division, subtraction).*/
int main()
{
  float num1, num2;

        printf("Enter Number 1: ");
        scanf("%f", &num1);//Number1

        printf("Enter Number 2: ");
        scanf("%f", &num2);//Number2

        printf("Addition Of Two Numbers is:- %f", num1+num2);//Number1+Number2

        printf("\nSubstraction Of Two Numbers is:- %f", num1-num2);//Number1-Number2

        printf("\nMultiplication Of Two Numbers is:- %f", num1*num2);//Number1*Number2

        printf("\nDivision Of Two Numbers is:- %f", num1/num2);//Number1/Number2
    return 0;
}
