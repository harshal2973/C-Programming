#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];  //Array of size 10 defined
    int i,n;
    float avg,sum=0;    //Sum intialized to 0.
    printf("Give value of n(not more than 10)\n");
    scanf("%d", &n);    //actual array size in n
    for(i=0;i<n;i++)
    {
        printf("Give number ");
        scanf("%d", &a[i]); //store array elements in array a.
        sum=sum+a[i];   //go on adding array element to sum
    }
    avg=sum/n;  //sum over.calculate average
    printf("Array elements are: \n");
    for(i=0;i<n;i++)    //print array elements
        printf("%4d",a[i]);
    printf("\nSum = %f Average = %6.2f\n",sum,avg); //print answer
return 0;
}
