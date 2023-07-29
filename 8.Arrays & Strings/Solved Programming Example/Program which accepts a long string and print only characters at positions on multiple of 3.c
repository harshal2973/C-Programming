#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[25];
    int i=2,len;
    printf("Enter a string: ");
    gets(str);
    len=strlen(str);
    while(i<len)
    {
        putchar(str[i]);
        i=i+3;
    }
return 0;
}
