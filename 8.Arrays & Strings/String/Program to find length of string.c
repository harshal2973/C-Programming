#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i,count=0;
    printf("Give string\n");
    gets(str);
    for(i=0;str[i]!=NULL;i++)
        count++;
    printf("Length of string is %s = %d\n",str,count);
return 0;
}
