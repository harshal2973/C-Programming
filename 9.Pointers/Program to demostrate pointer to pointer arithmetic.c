#include<stdio.h>
#include<conio.h>
int main()
{
    int i=50,*iptr,**iptrtoptr;
    iptr=&i;
    iptrtoptr=&iptr;
    printf("iptrtoptr\tiptr\ti\n");
    printf("%d\t\t%d\t%d\n",**(iptrtoptr),*iptr,i);
    printf("%x\t\t%x\t%x\n",&iptrtoptr,&iptr,&i);
return 0;
}
