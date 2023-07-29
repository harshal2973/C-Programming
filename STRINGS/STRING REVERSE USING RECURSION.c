#include <stdio.h>
#include <conio.h>
#include<string.h>
#define SIZE 100

void reverse(char *c);
int main()
{
char str[SIZE];
printf("Enter the main string: ");
scanf("%s",str);
printf ("Main String: %s",str);
printf("\nReversed String: ");
reverse(str);
return 0;
}

void reverse(char *c)
{
    if(*c)
    {
        reverse(c+1);
        printf("%c",*c);
    }
}
