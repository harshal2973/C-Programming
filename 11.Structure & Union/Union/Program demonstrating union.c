#include<stdio.h>
#include<conio.h>
union uni
{
 int i;
 char c;
 float f;
}u;

void main()
{
    u.i=5;
    printf("Member i = %d\n",u.i);
    u.c='a';
    printf("Member c = %c\n",u.c);
    u.f=3.5;
    printf("Member f = %f\n",u.f);
    printf("Following printf will not produce wrong value of i\n");
    printf("Because i member is not active. Currently active member is f\n");
    printf("Member i = %d\n",u.i);

}
