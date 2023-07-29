#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[]="Hello";
 int i;
 for(i=0;str[i]!=NULL;i++)
 printf("\nValue at str[%d] = %c",i,str[i]);

return 0;
}
