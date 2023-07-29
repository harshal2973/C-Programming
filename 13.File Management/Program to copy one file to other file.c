#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("a.txt","r");
    if(fp1 == NULL)
    {
        printf("File cannot open");
        exit(0);
    }
    fp2=fopen("b.txt","w");
    if(fp2 == NULL)
    {
        printf("File cannot open");
        exit(0);
    }
     while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF)
            break;
        fputc(ch,fp2);
        printf("%c",ch);
    }
    fclose(fp1);
    fclose(fp2);
return 0;
}

