#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
char str[100];
char temp;
int size;
printf("Enter the main string: ");
scanf("%s",str);
size=strlen(str);
int i=0,j=size-1;

while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("\nReversed String: %s",str);
return 0;
}
