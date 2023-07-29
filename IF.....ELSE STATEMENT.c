/* if....else statement */

/*
Syntax:
If(condition1)
    {
        statement1;
    }
else
    {
        statement2;
    }
*/

//Program To Find The Largest Number From Given Two Numbers.

#include<stdio.h>
int main()
{
 int a, b;

 printf("Enter Two Numbers:");
 scanf("%d %d", &a, &b);

 if(a > b)
 {
     printf("%d is Largest", a);
 }
 else
 {
     printf("%d is Largest", b);
 }
return 0;
}

