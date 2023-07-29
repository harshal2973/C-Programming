//Program To print number of days in given month.
#include<stdio.h>
#include<conio.h>
main()
 {
    int month;
    printf("Give month number between (1-12)\n");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days in month number %d is = 31\n",month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days in month number %d is = 30\n",month);
            break;
        case 2:
            printf("Number of days in month number %d is = 28 or 29\n",month);
            break;
        default:
            printf("Invalid Input\n");
            break;

    }
 }
