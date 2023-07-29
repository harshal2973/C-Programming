/*Program which accepts a string  and counts the number of blank, tab , new line and other characters
until EOF*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    int blank=0,newline=0,tab=0,other=0;

    printf("Give string that can be multiline terminated by ^z\n");
    c=getchar();
    while(c!=EOF)
    {
        switch(c)
        {
        case ' ':
            blank++;
            break;
        case '\t':
            tab++;
            break;
        case '\n':
            newline++;
            break;
        default:
            other++;
        }
        c=getchar();
    }
    printf(" Blanks = %d, Tabs = %d\n",blank,tab);
    printf(" New Lines = %d, Others = %d\n",newline,other);
return 0;
}
