#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3,n4;
    int sum=0;
    float avg=0;
    printf("Give four integer number\n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    sum=n1+n2+n3+n4;
    avg=sum/4.0;
    printf("Sum of %d %d %d %d = %d\n",n1,n2,n3,n4,sum);
    printf("Average of %d %d %d %d = %f\n",n1,n2,n3,n4,avg);
return 0;
}
