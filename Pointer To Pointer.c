//Write a program to print variable, address of pointer variable and pointer to pointer variable.

#include <stdio.h>
int main ()
{
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    ptr = &var; // address of var
    pptr = &ptr;// address of ptr using address of operator
    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n", **pptr);
    printf("%u\n",ptr);
    printf("%u\n",pptr);
return 0;
}

/*
//Call By Value.
#include<stdio.h>
void fun(int,int);
int main()
{
    int A=10,B=20;
    printf("Values before calling %d, %d",A,B);
    fun(A,B);
    printf("\nValues after calling %d, %d",A,B);
return 0;
}
void fun( int X, int Y)
{
    X=11;
    Y=22;
}
*/
/*
//Call By Reference.
#include<stdio.h>
void fun(int*,int*);
int main()
{
    int A=10,B=20;
    printf("Values before calling %d, %d",A,B);
    fun(&A,&B);
    printf("\nValues after calling %d, %d",A,B);
return 0;
}
void fun( int *X, int *Y)
{
    *X=11;
    *Y=22;
}
*/
