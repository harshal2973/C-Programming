//Program Demonstrating switch statement without break statement.

#include<stdio.h>
#include<conio.h>
main()
{
    int choice;
    printf("Menu Of Operation\n");
    printf("==================\n");
    printf("1  Addition\n");
    printf("2  Subtraction\n");
    printf("3  Multiplication\n");
    printf("4  Division\n");
    printf("5  Modulo Division\n");
    printf("==================\n");

    printf("Give Your Choice:   ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("You Selected Addition\n");
            break;
        case 2:
            printf("You Selected Subtraction\n");
            break;
        case 3:
            printf("You Selected Multiplication\n");
            break;
        case 4:
            printf("You Selected Division\\n");
            break;
        case 5:
            printf("You Selected Modulo Division\n");
            break;
        default:
            printf("Wrong Choice\n");

    }


}

