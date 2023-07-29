#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i;
    printf("Give string\n");
    gets(str);
    for(i=0;str[i]!=NULL;i++)
    printf("%c\t%d\n",str[i],str[i]);
return 0;
}

