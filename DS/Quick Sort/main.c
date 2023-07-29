#include <stdio.h>
#include <stdlib.h>

int partition(int *A,int start,int end)
{
    int temp,pivot,pindex,i;
    pivot=A[end];
    pindex=start;
    for(i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
        temp=A[i];
        A[i]=A[pindex];
        A[pindex]=temp;
        pindex=pindex+1;
        }
    }
    temp=A[i];
    A[i]=A[pindex];
    A[pindex]=temp;
    return pindex;
}
void quick_sort(int *A,int start,int end)
{
    int pindex;
    if(start < end)
    {
    pindex=partition(A,start,end);
    quick_sort(A,start,pindex-1);
    quick_sort(A,pindex+1,end);
    }
}
int main()
{
    int a[10],i,n,j;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
    quick_sort(a,0,n);
    printf("\nSorted array is:");
    for(j=0;j<n;j++)
    {
        printf("\n%d,",a[j]);
    }

}
