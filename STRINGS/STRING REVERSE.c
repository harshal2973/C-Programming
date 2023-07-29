#include <stdio.h>
#include <conio.h>
#include<string.h>
#define SIZE 100
int main()
{
char str1[SIZE], str2[SIZE];
int size;
printf("Enter the main string: ");
scanf("%s",str1);
size=strlen(str1);
int i=size-1,j=0;
while(i>=0)
{
str2[j] = str1[i];
j++;
i--;
}
str2[j] = '\0';
printf ("Main String: %s",str1);
printf("\nReversed String: %s",str2);
return 0;
}
