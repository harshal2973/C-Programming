#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Give Integer Number:");
    scanf("%d", &num);
    printf("Reverse of %d is = ",num);
    while(num!=0)
    {
        i = num % 10;
        printf("%d",i);
        num = num / 10;
    }
return 0;
}



