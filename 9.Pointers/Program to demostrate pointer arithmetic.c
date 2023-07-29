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
    printf("char\t float\t int\n");
    printf("%x\t %x\t %x\n",cptr,fptr,iptr);
    cptr++;
    fptr++;
    iptr++;
    printf("After increment operation\n");
    printf("char\t float\t int\n");
    printf("%x\t %x\t %x\n",cptr,fptr,iptr);
    cptr--;
    fptr--;
    iptr--;
    printf("After decrement operation\n");
    printf("char\t float\t int\n");
    printf("%x\t %x\t %x\n",cptr,fptr,iptr);
    cptr=cptr+2;
    fptr=fptr+2;
    iptr=iptr+2;
    printf("After adding number by 2\n");
    printf("char\t float\t int\n");
    printf("%x\t %x\t %x\n",cptr,fptr,iptr);
    cptr=cptr-4;
    fptr=fptr-4;
    iptr=iptr-4;
    printf("After decrementing by number 4\n");
    printf("char\t float\t int\n");
    printf("%x\t %x\t %x\n",cptr,fptr,iptr);
return 0;
}
