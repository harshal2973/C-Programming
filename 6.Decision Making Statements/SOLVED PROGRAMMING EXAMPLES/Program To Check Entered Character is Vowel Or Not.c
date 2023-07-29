//Program to check entered character is Vowel or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter One Character:\n");
    scanf("%c", &ch);
    if( ((ch>='a') && (ch<='z')) || ((ch>='A' && (ch<='Z'))))
    {
        switch(ch)
        {
        case 'a':   case 'A':
        case 'e':   case 'E':
        case 'i':   case 'I':
        case 'o':   case 'O':
        case 'u':   case 'U':
            printf("Entered character %c is vowel.\n", ch);
            break;
        default:
            printf("Entered character %c is not vowel.\n", ch);
       }
   }
   else
    printf("Entered character %c is not from alphabet.\n", ch);

return 0;
}

