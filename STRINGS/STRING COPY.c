#include <stdio.h>
#include <conio.h>
#define SIZE 100
int main()
{
char str1[SIZE], str2[SIZE];
int i=0;
printf("Enter the main string: ");
scanf("%s",str1);
while(str1[i] != '\0')
{
str2[i] = str1[i];
i++;
}
str2[i] = '\0';
printf ("Main String: %s",str1);
printf("\nCopied String: %s",str2);
return 0;
}

