
#include<stdio.h>
#include<conio.h>
void main()
{
    char c1,c2;

    printf("Enter first character\n");
    scanf("%c",&c1);
    fflush(stdin);//Standard Input Is Flushed.
    printf("Enter second character\n");
    scanf("%c",&c2);
    printf("The  first character =%c and second =%c\n",c1,c2);

getch();
}

