#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char str1[20]="COMPUTER";   //size 20
    char str2[20]="computer";

    printf("Length of string %s = %d\n",str1,strlen(str1));
    //strlen(str1) finds length of string str1
    i=strcmp(str1,str2);    //compare two string str1 and str2
    if(i==0) //return value0 if strings equal otherwise not equal
        printf("Two string are equal\n");
    else
        printf("Two string are not equal\n");
    printf("Reverse of %s is ",str1);
    strrev(str1);   //again reverse str1 and replace str1
    printf("= %s\n",str1);
    strrev(str1);
    //again reverse str1, so str1 has original value
    printf("concate of %s and %s",str1,str2);
    strcat(str1,str2);
    //concate str2 after str1. size of str1 increases
    printf("= %s",str1);
return 0;
}
