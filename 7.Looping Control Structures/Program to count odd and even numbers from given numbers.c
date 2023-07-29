#include<stdio.h>
#include<conio.h>
int main()
{
    int odd,even,n;
    odd=0;
    even=0;
    printf("Give last number as -99\n");
    for( ; ;)
    {
        printf("\nGive number : ");
        scanf("%d", &n);
        if(n == -99)
            break;
        if(n%2 == 0)
            even++;
        else
            odd++;
    }
    printf("Number of evens = %d\n", even);
    printf("Number of odds = %d\n", odd);
return 0;
}
