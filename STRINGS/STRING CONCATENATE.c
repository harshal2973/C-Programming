#include <stdio.h>
#include <conio.h>
int main()
{

char s1[50], s2[50],s3[100];
int i=0,j=0;
printf("Enter the first string: ");
scanf("%s",s1);
printf("Enter the second string: ");
scanf("%s",s2);

while(s1[i] != '\0')
{
s3[j] = s1[i];
i++;
j++;
}

i=0;

while(s2[i] != '\0')
{
s3[j] = s2[i];
i++;
j++;
}
s3[j] = '\0';

printf ("\nFirst String: %s",s1);
printf("\nSecond String: %s",s2);
printf("\nConcatenated String: %s",s3);

return 0;
}


