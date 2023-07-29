#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10;
    int y;
    int z=0;
    x++;
    ++x;
    y=++x;
    printf("Value of x=%d y=%d and z=%d\n",x,y,z);
    z=y--;
    printf("Value of x=%d y=%d and z=%d\n",x,y,z);
}
