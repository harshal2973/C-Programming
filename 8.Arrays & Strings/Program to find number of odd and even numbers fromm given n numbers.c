#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];  //Array of size 10 defined
    int i,n;
    int odd=0,even=0;   //initialize counts
    printf("Give value of n(not more than 10)\n");
    scanf("%d", &n);    //actual array size in n
    for(i=0;i<n;i++)
    {
        printf("Give number ");
        scanf("%d", &a[i]); //store array elements in array a.
        if (a[i]%2 == 0)
            even++; //increment even count
        else
            odd++;  //increment odd count
    }
    printf("Array elents are :\n");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    printf("\nNumber of ODDS = %d EVENS =%d\n",odd,even);
}
