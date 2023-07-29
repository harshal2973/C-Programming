#include<stdio.h>
#include<conio.h>
union uni
{
 int i;
 char c;
 float f;
} u;
struct student
{
    int i;
    char c;
    float f;
} s;
void main()
{
    int k;
    k=sizeof(u);
    printf("Total size required by union u is %d bytes\n",k);
    k=sizeof(s);
    printf("Total size required by structure s is %d bytes\n",k);
}
