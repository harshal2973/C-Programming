#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];  //Array of size 10 defined
    int i,n;
    int max,min;
    printf("Give value of n(not more than 10)\n");
    scanf("%d", &n);    //actual array size in n
    for(i=0;i<n;i++)
    {
        printf("Give number ");
        scanf("%d", &a[i]); //store array elements in array a.
    }
    max= a[0];  //initialize min and max
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("Array elements are : \n");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\nLargest = %d Smallest = %d\n",max,min);
}
