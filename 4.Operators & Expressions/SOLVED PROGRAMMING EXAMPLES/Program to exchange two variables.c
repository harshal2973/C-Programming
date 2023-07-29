#include<stdio.h>
int main()
{
  int x,y,temp;
  x=5;
  y=3;
  printf("Before exchange x = %d and y = %d\n",x,y);
  temp=x;
  x=y;
  y=temp;
  printf("After exchange x = %d and y = %d\n",x,y);
return 0;
}
