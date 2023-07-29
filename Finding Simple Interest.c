/*
Write a program to calculate simple interest (i = (p*r*n)/100 )
i = Simple interest
p = Principal amount
r = Rate of interest
n = Number of years
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float p, r, n, i;


    printf("Principal Amount:");
    scanf("%f", &p);

    printf("Rate of interest:");
    scanf("%f", &r);

    printf("Number of years:");
    scanf("%f", &n);

    i=(p*r*n)/100;
    printf("Simple interest: %f", i);
return 0;
}
//Program Ends
