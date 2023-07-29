#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4][4], b[4][4],c[4][4];
    int m,n,p,q;
    //m no. of rows in a, n no. of cols in a
    int i,j;
    //p no. of rows in b, q no. of cols in b
    printf("Give number of rows in first matrix\n");
    scanf("%d",&m);
    printf("Give number of columns in first matrix\n");
    scanf("%d",&n);
    printf("Give number of rows in second matrix\n");
    scanf("%d",&p);
    printf("Give number of columns in second matrix\n");
    scanf("%d",&q);
    if(m!=p || n!=q)    //check size match or not
    {
        printf("Size do not match.Addition not possible\n");
        return 0;
    }
    printf("Enter matrix A row-wise\n");
    for(i=0;i<m;i++)    //Get first matrix data
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter matrix b row-wise\n");
    for(i=0;i<p;i++)    //Get second matrix data
    {
        for(j=0;j<p;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A \n");
    for(i=0;i<m;i++)    //display first matrix row-wise
    {
        for(j=0;j<n;j++)
        printf("%4d",a[i][j]);
        printf("\n");
    }
    printf("Matrix B \n");
    for(i=0;i<p;i++)    //display second matrix row-wise
    {
        for(j=0;j<q;j++)
        printf("%4d",b[i][j]);
        printf("\n");
    }
getch();
}
