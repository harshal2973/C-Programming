// C program to find the length of string
#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
char str[SIZE];
int i;
printf("Enter the String: ");
scanf("%s",str);
for (i = 0; str[i] != '\0'; i++);
printf("Length of string is %d.", i);
return 0;
}
