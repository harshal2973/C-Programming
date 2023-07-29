#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("a.txt","w");
    if(fp == NULL)
    {
        printf("File cannot open");
        exit(0);
    }
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='*')
            break;
        fputc(ch,fp);
    }
    fclose(fp);
return 0;
}
