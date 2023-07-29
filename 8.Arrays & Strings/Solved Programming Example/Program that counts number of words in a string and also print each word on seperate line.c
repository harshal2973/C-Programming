#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char str[30];
  int i,count=1;

  printf("Give string \n");
  gets(str);
  for(i=0;i<str[i]!= NULL;i++)
  {
      if(str[i]== ' ' || str =='\t')
      {
          printf("\n");
          count++;
      }
      else
        printf("%c",str[i]);
  }
  printf("\nNumber of words = %d\n",count);
return 0;
}
