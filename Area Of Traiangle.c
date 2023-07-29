/*
Write a program to find area of triangle(a=h*b*.5)
a = area
h = height
b = base
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h ,b;
    float a;

    printf("Height Of Triangle:");
    scanf("%d", &h);


    printf("Breadth Of Triangle:");
    scanf("%d", &b);

    a=(0.5*h*b);
    printf("Area Of Triangle:%f",a);

    return 0;
}
