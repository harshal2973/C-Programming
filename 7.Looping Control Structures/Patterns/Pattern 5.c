/*
     1
    12
   123
  1234
 12345
123456
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,n;
    printf("How many lines?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//controls number of lines
    {
        for (j=1;j<=n-i;j++)//controls number of blanks
            printf(" ",j);
        for (k=1;k<=i;k++)//control number printing
            printf("%d",k);
        printf("\n");
    }
return 0;
}
