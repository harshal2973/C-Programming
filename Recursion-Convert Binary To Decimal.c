//Program to Convert Binary to Decimal.
#include<stdio.h>
#include<conio.h>
int convertBinaryToDecimal( int b, int c, int t);
void main()
{
    unsigned int binary, decimal;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    decimal = convertBinaryToDecimal(binary, 1 , 0);
    printf("Decimal value of %d is % d", binary, decimal);
}
int convertBinaryToDecimal( int b, int c, int t)
{
    if(b > 0)
       {
           t += (b % 10) * c;
           convertBinaryToDecimal(b/10 , c * 2 , t);
       }
    else
        return t;
}
