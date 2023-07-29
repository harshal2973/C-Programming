#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;
    printf("Give the value of temperature in Fahrenheit\n");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("Fahrenheit Temperature = %f\n",f);
    printf("Centigrade Temperature = %f\n",c);
return 0;
}
