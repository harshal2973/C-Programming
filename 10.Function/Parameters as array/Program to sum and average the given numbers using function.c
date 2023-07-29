#include<stdio.h>
#include<conio.h>
int calculate(int a[],int n)
{
    int i,sum=0;
    float avg;
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
     avg=(float)sum/n;
     printf("\nSum = %d Average = %6.2f\n",sum,avg);
}

void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Give number ");
        scanf("%d", &a[i]);

    }
}

int main()
{
    int x[20],n;
    printf("How many numbers?\n");
    scanf("%d",&n);
    input(x,n);
    calculate(x,n);
return 0;
}
