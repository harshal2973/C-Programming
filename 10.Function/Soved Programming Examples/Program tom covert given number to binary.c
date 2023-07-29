#include<stdio.h>
#include<conio.h>
void convert_to_binary(int);

int main()
{
    int n;
    printf("Give number\n");
    scanf("%d",&n);
    convert_to_binary(n);
return 0;
}

void convert_to_binary(int num)
{
    unsigned int bin[16];
    int i,m=15;
    while(num!=0)
    {
        bin[m]=num%2;
        m--;
        num=num/2;
    }
    printf("Binary=");
    for(i=++m;i<=15;i++)
        printf("%u",bin[i]);
}
