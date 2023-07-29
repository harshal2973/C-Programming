#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    int i,n,count=0;
    char *cptr;

    printf("Enter some string\n");
    gets(str);
    cptr=str;

    while(*cptr!='\0')
    {
        count++;
        cptr++;
    }
    printf("Length of string %s is = %d\n",str,count);
    cptr--;

    printf("Reverse of string %s is ",str);
    while(count>0)
    {
        putchar(*cptr);
        count--;
        cptr--;
    }
return 0;
}
