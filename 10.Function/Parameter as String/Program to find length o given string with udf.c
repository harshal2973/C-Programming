#include<stdio.h>
#include<conio.h>
#include<string.h>
int length(char *s)
{
    int cnt=0;
    while(*s!=NULL)
    {
        s++;
        cnt++;
    }
    return cnt;
}

int main()
{
    char str[20];
    int len;
    printf("Enter String\n");
    gets(str);
    len=strlen(str);
    printf("Length of string %s = %d\n",str,len);
return 0;
}
