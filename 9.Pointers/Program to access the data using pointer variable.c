#include<stdio.h>
#include<conio.h>
int main()
{
     char ch='a';
    float f1=30.5;
    int i=50;

    char *cptr;
    float *fptr;
    int *iptr;

    cptr=&ch;
    fptr=&f1;
    iptr=&i;

    printf("Using variables\n");
    printf("Name\t\tValue\t\tAddress\n");
    printf("ch\t\t%c\t\t%X\n",ch,&ch);
    printf("f1\t\t%f\t%X\n",f1,&f1);
    printf("i\t\t%d\t\t%X\n",i,&i);

    printf("Using pointer variables\n");
    printf("Name\t\tValue\t\tAddress\n");
    printf("ch\t\t%c\t\t%X\n",*cptr,cptr);
    printf("f1\t\t%f\t%X\n",*fptr,fptr);
    printf("i\t\t%d\t\t%X\n",*iptr,iptr);

    *cptr=*cptr+1;
    *fptr=*fptr+1;
    *iptr=*iptr+1;
    printf("After incrementing by 1 using pointer\n");
    printf("Name\t\tValue\t\tAddress\n");
    printf("ch\t\t%c\t\t%X\n",ch,&ch);
    printf("f1\t\t%f\t%X\n",f1,&f1);
    printf("i\t\t%d\t\t%X\n",i,&i);
return 0;
}
