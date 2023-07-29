#include<stdio.h>
void main(){

    int a,b,add,sub;
    printf("Enter Value 1 = ");
    scanf("%d",&a);
    printf("Enter Value 2 = ");
    scanf("%d",&b);
    add = a + b;
    sub = a-b;
    printf("Addition = %d",add);
    printf("\nSubtraction = %d",sub);
    getch();
}
