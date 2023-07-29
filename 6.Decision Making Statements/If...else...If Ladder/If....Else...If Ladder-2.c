#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter one character\n");
    scanf("%c",&ch);
    if((ch >= '0') && (ch <= '9'))
        printf("The Character %c is digit\n",ch);
    else if ((ch >= 'a') && (ch <= 'z'))
        printf("The Character %c is Lower Case\n",ch);
    else if ((ch >= 'A') && (ch <= 'Z'))
        printf("The Character %c is Upper Case\n",ch);
    else
        printf("The Character %c is other symbol\n",ch);
getch();
}
