#include<stdio.h>
#include<conio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int *p;
    p=array;
    printf("%p\n",p);
    printf("%p",p+1);
return 0;
}
