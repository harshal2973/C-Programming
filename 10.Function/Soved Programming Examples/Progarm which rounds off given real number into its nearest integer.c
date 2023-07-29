#include<stdio.h>
int nearest(float x)
{
    int num;
    float temp;
    num=x;
    temp=x-num;
    if(temp>0.5)
        return num+1;
    else
        return num;
}

int main()
{
    float a;
    int ans;
    printf("Give one real number\n");
    scanf("%f",&a);
    ans=nearest(a);
    printf("Nearest number =%d\n",ans);
}
