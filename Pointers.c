#include<stdio.h>
#include<conio.h>

/*
//Declaration & Initialization of Pointer
void main()
{
    int a= 10 , *p; // assign memory address of a to pointer variable p
    p = &a;
    printf("%d %d %d", a, *p, p);
}

*/
/*
#include<stdio.h>
void main()
{
int number=50;
int *p;
p=&number;
printf("Address of p variable is %x\n",p);
printf("Value of p variable is %d \n",*p);
}
*/


//Address Of (&) Operator
void main()
{
    int number=50;
    printf("value of number is %d, Address of number is %u",number,&number);
}

