#include <stdio.h>
#include <conio.h>
#include<string.h>
#define SIZE 100
int ispalindrom(char *);
int main()
{
char str[SIZE];
printf("Enter the main string: ");
scanf("%s",str);
int ans=ispalindrom(str);
if(ans==1)
printf("It is palindrom");
else
    printf("It is  not palindrom");
}

int ispalindrom(char *c)
{
    int i,j;
    i=0;
    j=strlen(c)-1;
    while(i<j)
    {
        if(c[i]!=c[j])
            return -1;
        i++;
        j--;
    }
    return 1;
}
