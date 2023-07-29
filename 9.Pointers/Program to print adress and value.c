#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='a';
    float f1=30.5;
    int i=50;
    printf("Name\t\tValue\t\tAddress\n");
    printf("ch\t\t%c\t\t%X\n",ch,&ch);
    printf("f1\t\t%f\t%X\n",f1,&f1);
    printf("i\t\t%d\t\t%X\n",i,&i);
return 0;
}
