#include<stdio.h.>
#include<conio.h>

#define ADD(X,Y)(X+Y)
#define SUB(X,Y)(X-Y)
int main()
{
int a=15,b=35;
int c=ADD(a,b);
printf("Addition of %d and %d is %d.\n",a,b,c);
int d=SUB(a,b);
printf("Subtraction of %d and %d is %d.",a,b,d);

return 0;   //returns EXIT-SUCCESS
}
