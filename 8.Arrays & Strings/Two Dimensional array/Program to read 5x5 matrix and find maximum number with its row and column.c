#include<stdio.h>
int main()
{
    int a[5][5];
    int m,n;
    int i,j;
    int row,col,max;

    printf("How many rows?\n");
    scanf("%d",&m);
    printf("How many columns?\n");
    scanf("%d",&n);

    printf("Enter matrix row-wise\n");

    for(i=0;i<m;i++)    //get matrix data
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                row=i;
                col=j;
            }
        }
    }
    printf("Maximum = %d at row = %d and column = %d \n",max,row+1,col+1);
return 0;
}
