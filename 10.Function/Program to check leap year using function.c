#include<stdio.h>
#include<conio.h>

char check_leap(int year);

int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    if(check_leap(year)=='t')
        printf("Year %d is leap year\n",year);
    else
        printf("Year %d is not leap year\n",year);
}

char check_leap(int year)
{
    if((year % 4 == 0 ) && (year % 100 != 0) || (year % 400 == 0))
        return 't';
    else
        return 'f';
}
