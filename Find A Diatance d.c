/*
Write a C program to find out distance travelled by the equation.
 d = ut + at^2
*/
#include<stdio.h>

int main()
{
    int u, t, a;
    float  d;

    printf("Speed:");
    scanf("%d", &u);

    printf("Time:");
    scanf("%d", &t);

    printf("Aceleration:");
    scanf("%d", &a);

    d=(u*t)+(0.5*a*t*t);
    printf("Distance Travelled is %f", d);

return 0;
}
//Program Ends
