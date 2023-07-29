#include <stdio.h>
#include <conio.h>
#define SIZE 100
int main()
{
char str[SIZE], substr[SIZE];
int i=0,n;
printf("Enter the main string: ");
scanf("%s",str);
printf("\nEnter the number of first N characters to be extracted ") ;
scanf ("%d", &n);
while(str[i] != '\0' && i<n)
{
substr[i] = str[i];
i++;
}
substr[i] = '\0';
printf ("\nThe substring is : %s",substr);
return 0;
}
