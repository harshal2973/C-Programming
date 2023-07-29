#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse(char s[]);
int main()
{
   char str[20];
   int len;
   printf("Enter String\n");
   gets(str);
   printf("Reverse of %s is ",str);
   reverse(str);
   printf("%s\n",str);
return 0;
}

void reverse(char s[])
{
   int i,j,len,temp;
   len=0;
   while(s[len]!=NULL)
        len++;
   j=len-1;

   for(i=0;i<j;i++)
   {
       temp=s[i];
       s[i]=s[j];
       s[j]=temp;
       j--;
   }
}
