#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int x,i,y,l;
    printf("Enter the string\n");
    gets(str);
    l=strlen(str);
    printf("How many characters you want to extract? ");
    scanf("%d",&x);
    printf("From where to ? ");
    scanf("%d",&y);
    printf("The extracted part of string is =\n");
    for(i=(y-1);i<(y+x-1);i++)
        printf("%c\n",str[i]);
return 0;
}
