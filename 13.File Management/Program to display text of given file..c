#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("a.txt","r");
    if(fp == NULL)
    {
        printf("File cannot open");
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
return 0;
}

