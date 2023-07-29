#include<stdio.h>
int main()
{
    int sum = 47;
    int n = 10;
    float avg;
    avg=sum/n;
    printf("avg = %f\n",avg);
    avg = (float)sum/n;
    printf("avg = %f\n",avg);
    avg = (float)(sum/n);
    printf("avg = %f\n",avg);
return 0;
}
