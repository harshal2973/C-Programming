#include <stdio.h>
#include <conio.h>
#define SIZE 100
int main()
{
char s1[SIZE], upper[SIZE],lower[SIZE];
int i;
printf("Enter the main string: ");
scanf("%s",s1);
for(i=0;s1[i] != '\0';i++)
{
    if(s1[i]>='A' && s1[i]<='Z')
        lower[i]=s1[i]+32;
    else
        lower[i]=s1[i];
}
lower[i]='\0';
for(i=0;s1[i] != '\0';i++)
{
    if(s1[i]>='a' && s1[i]<='z')
        upper[i]=s1[i]-32;
    else
        upper[i]=s1[i];
}
upper[i]='\0';
printf("\nMain String: %s",s1);
printf("\nString to lower case: %s",lower);
printf("\nString to upper case: %s",upper);
return 0;
}
