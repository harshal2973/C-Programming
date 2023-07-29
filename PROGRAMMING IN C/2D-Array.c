#include<stdio.h>
#include<stdlib.h>

#define R 10
#define C 10

void arrayprint(int (*p)[C],int n1,int n2);

int main()
{
    int r,c,i,j,temp=1;
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter columns: ");
    scanf("%d",&c);
    int A[R][C];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter Value %d: ",temp);
            scanf("%d",&A[i][j]);
            temp++;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    arrayprint(A,r,c);
    return 0;
}
void arrayprint(int (*p)[C],int n1,int n2)
{
    int i=0;
  while(i<n1)
    {
        //printf("%d",i);
        int j=0;
        while(j<n2)
        {
    //printf("%d",j);
            printf("%d ",*(*(p+i)+j));
            j++;
        }
        printf("\n");
        i++;
    }
}
