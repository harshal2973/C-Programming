#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    printf("Who is the Prime Minister of India ?\n");
    printf("1 Amit Shah\n");
    printf("2 Narendra Modi\n");
    printf("3 Rahul Ghandhi\n");
    printf("4 Vijay Rupani\n");
    printf("=======================================\n");

    printf("Enter Your Choice:  ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("Wrong Answer\n");
        break;
    case 2:
        printf("Right Answer\n");
        break;
    case 3:
        printf("Wrong Answer\n");
        break;
    case 4:
        printf("Wrong Answer\n");
        break;
    default:
        printf("Wrong Choice\n");
        break;
    }
return 0;
}
