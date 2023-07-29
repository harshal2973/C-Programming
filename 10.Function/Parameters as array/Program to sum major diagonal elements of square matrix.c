#include<stdio.h>
#include<conio.h>

int calculate_major(int a[][5],int m,int n)
{
    int i,j,sum=0;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        if(i==j)
        sum=sum+a[i][j];
    printf("Summation of diagonal elements is= %d\n",sum);
}

void input(int a[][5],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        printf("Give row %d data\n",i+1);
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
}

int main()
{
    int x[5][5],m,n;
    printf("What is size of matrix?");
    scanf("%d",&m);
    n=m;
    input(x,m,n);
    calculate_major(x,m,n);
return 0;
}
