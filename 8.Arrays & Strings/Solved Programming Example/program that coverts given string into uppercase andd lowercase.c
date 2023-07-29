#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[20],ustr[20],lstr[20];
    int i,count=0;
    printf("Give string\n");
    gets(str);
    for(i=0;i<str[i]!=NULL;i++)
    {
        if(str[i] >= 'a' && str[i]<='z')
            ustr[i]=str[i]-32;
        else
            ustr[i]=str[i];
        if(str[i] >= 'A' && str[i]<='Z')
            lstr[i]=str[i]+32;
        else
                lstr[i]=str[i];
    }
    lstr[i]=NULL;
    ustr[i]=NULL;
    printf("Original String is %s\n",str);
    printf("Upper case String is %s\n",ustr);
    printf("Lower case String is %s\n",lstr);
return 0;
}
