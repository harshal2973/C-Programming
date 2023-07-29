#include<string.h>
int main()
{
    char str[30],rev[30];
    int i,j,count=0;
    printf("Give string\n");
    gets(str);
    for(i=0;str[i]!=NULL;i++)
        count++;
    for(i=count-1,j=0;i>=0;i--,j++)
        rev[j]=str[i];
    rev[j]=NULL;
    printf("Original string %s\t Reverse string %s\n",str,rev);
return 0;
}

