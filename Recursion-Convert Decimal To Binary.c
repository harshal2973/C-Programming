//Program to Convert Decimal to Binary.
#include<stdio.h>
#include<conio.h>
int convertDecimalToBinary(int);
void main()
{
    int dec, bin;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = convertDecimalToBinary(dec);
    printf("The binary equivalent = %d \n",bin);
}
int convertDecimalToBinary(int dec)
{
    if(dec == 0)
       return 0;
    else
       return(dec % 2 + 10 *convertDecimalToBinary(dec / 2));
}
