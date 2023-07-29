//Program To Reverse a given number and lso check for palindrome.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp;
    int i,rev=0;
    printf("Give integer number\n");
    scanf("%d",&num);
    printf("Reverse of %d is =", num);
    temp=num;
    while(num!=0)
    {
        i = num%10;
        rev = (rev*10)+ i;
        num = num/10;
    }
    printf("%d\n", rev);
    if(temp == rev)
        printf("Given number %d is palindrome\n", temp);
    else
    printf("Given number %d is not palindrome\n", temp);
return 0;
}
