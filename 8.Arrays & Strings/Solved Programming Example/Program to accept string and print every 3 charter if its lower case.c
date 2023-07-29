#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,len;
    printf("GIve one string\n");
    gets(s);
    len=strlen(s);
    for(i=2;i<len;i=i+3)
    {
        if(islower(s[i]))
        printf("%c",s[i]);
    }
return 0;
}
